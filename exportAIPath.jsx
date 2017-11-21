var s = '';
var s2 = '';
var pov ='';
var retChar = eval('String.fromCharCode(13)');
var docRef = app.activeDocument;

var str = exportPathItems(docRef.layers[0].pathItems);
writeFile(str);

function transformPoint(point)
{
	//point is an object with position, left and right
	//this must return the transformed point
	
	point.position[1] += 200;
	point.left[1] += 200;
	point.right[1] += 200;
	
	point.position[1] *= 3;
	point.left[1] *= 3;
	point.right[1] *= 3;
	point.position[0] *= 3;
	point.left[0] *= 3;
	point.right[0] *= 3;
	return point;
}

function pathHeader(path)
{
	return "curve = new BezierCurve();\n";
}

function stringifyPoint(point)
{
	//must return str 
	return "curve->addPoint(BezierCurvePoint(Point(" + point.position[0] 
		+ ", " + point.position[1] + "), Point(" 
		+ point.right[0] + ", " + point.right[1] + "), Point(" + point.left[0] + ", " + point.left[1] + ")));\n";
}

function pathFooter(path)
{
	return "toRender.push_back(curve);\n";
}

function exportPathItems(pathItems){  
	var paths = [];
      
	for(var i = 0; i < pathItems.length; i++)
	{
		var path = {
			points: []
		};
		paths.push(path);
		var points = pathItems[i].pathPoints;
		for(var k = 0; k < points.length; k++)
		{
			var point = points[k];
            path.points.push({
				position: point.anchor,
				left: point.leftDirection,
				right: point.rightDirection
			});
		}
	}

	for(var i = 0; i < paths.length; i++)
	{
		var path = paths[i];
		for(var k = 0; k < path.points.length; k++){
			path.points[k] = transformPoint(path.points[k]);
		}
	}
	
	var allStr = "";
	for(var i = 0; i < paths.length; i++)
	{
		var path = paths[i];
		var str = pathHeader(path);
		for(var k = 0; k < path.points.length; k++){
			str += stringifyPoint(path.points[k]);
		}
		str += pathFooter(path);
        allStr += str;
		
	}
    return allStr
}

//debug function
function dir(obj)
{
    for(prop in obj){
		$.writeln(prop +":" + obj[prop]);
	}
}

function writeFile(pov){
    var destFolder = Folder.selectDialog( 'Select the directory where to save the file.', '~' );
    if (destFolder != null) {
        var reportFile =new File(destFolder+'/aiexport.txt');
        reportFile.open('w');
        reportFile.writeln(pov);
        reportFile.close();
    }
}
