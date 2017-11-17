#include <iostream>
#include <fstream>
#include "PolyLine.h"
#include "ICurve.h"
#include "Point.h"
#include "CurveRenderer.h"
#include "BezierCurve.h"
#include "BezierCurvePoint.h"
#include <vector>
#include "LinearPointInterpolator.h"

using namespace std;

int main()
{
    ofstream myfile;
    myfile.open ("/media/plenituz/DATA/C/test");
    
//    PolyLine* curve = new PolyLine();
//    curve->addPoint(Point());
//    curve->addPoint(Point(100, 0));
//    curve->addPoint(Point(100, 100));
//    curve->addPoint(Point(150, 150));
    vector<BezierCurve*> toRender;
    BezierCurve* curve;
    curve = new BezierCurve();
    curve->addPoint(BezierCurvePoint(Point(382.726776123047, 403.94116973877), Point(368.565902709961, 410.707260131836), Point(371.79695892334, 419.279434204102)));
    curve->addPoint(BezierCurvePoint(Point(342.750778198242, 400.858978271484), Point(332.616508483887, 396.235633850098), Point(355.479125976563, 406.66577911377)));
    curve->addPoint(BezierCurvePoint(Point(312.034950256348, 399.043991088867), Point(309.036849975586, 399.536727905273), Point(322.402885437012, 397.340148925781)));
    curve->addPoint(BezierCurvePoint(Point(305.035720825195, 403.60961151123), Point(304.224403381348, 406.880401611328), Point(305.881439208984, 400.200141906738)));
    curve->addPoint(BezierCurvePoint(Point(308.637016296387, 411.262664794922), Point(321.501091003418, 423.267127990723), Point(306.396995544434, 409.172355651855)));

    toRender.push_back(curve);
    curve = new BezierCurve();
    curve->addPoint(BezierCurvePoint(Point(310.501647949219, 368.008735656738), Point(322.750991821289, 392.485198974609), Point(306.016937255859, 371.78670501709)));
    curve->addPoint(BezierCurvePoint(Point(346.246971130371, 380.163642883301), Point(349.65552520752, 378.264152526855), Point(326.859970092773, 390.967597961426)));
    curve->addPoint(BezierCurvePoint(Point(357.474815368652, 376.262054443359), Point(359.763954162598, 375.479484558105), Point(353.720008850098, 377.545669555664)));
    curve->addPoint(BezierCurvePoint(Point(364.458618164063, 375.886344909668), Point(373.987678527832, 380.813621520996), Point(361.738838195801, 374.480026245117)));
    curve->addPoint(BezierCurvePoint(Point(378.797813415527, 366.796234130859), Point(381.033027648926, 364.10977935791), Point(375.08846282959, 371.254325866699)));
    curve->addPoint(BezierCurvePoint(Point(378.464790344238, 357.397521972656), Point(372.666778564453, 353.853172302246), Point(381.938507080078, 359.521041870117)));
    curve->addPoint(BezierCurvePoint(Point(364.265464782715, 361.92448425293), Point(360.072189331055, 367.216209411621), Point(367.521675109863, 357.815231323242)));
    curve->addPoint(BezierCurvePoint(Point(352.39331817627, 362.93726348877), Point(345.779273986816, 357.466484069824), Point(357.405395507813, 367.082977294922)));
    curve->addPoint(BezierCurvePoint(Point(334.677337646484, 366.425788879395), Point(332.65779876709, 369.382209777832), Point(339.40015411377, 359.511978149414)));
    curve->addPoint(BezierCurvePoint(Point(326.546859741211, 370.722221374512), Point(321.547348022461, 368.205001831055), Point(330.814682006836, 372.871101379395)));
    curve->addPoint(BezierCurvePoint(Point(326.48469543457, 362.312965393066), Point(329.808906555176, 356.359794616699), Point(324.756683349609, 365.407653808594)));
    curve->addPoint(BezierCurvePoint(Point(321.44506072998, 349.684455871582), Point(315.935920715332, 348.066696166992), Point(328.207237243652, 351.670143127441)));
    curve->addPoint(BezierCurvePoint(Point(305.187744140625, 351.10668182373), Point(302.977203369141, 355.535018920898), Point(309.726699829102, 342.013870239258)));
    curve->addPoint(BezierCurvePoint(Point(299.312759399414, 364.750556945801), Point(297.725280761719, 369.742263793945), Point(300.806831359863, 360.052551269531)));
    curve->addPoint(BezierCurvePoint(Point(301.534332275391, 378.918891906738), Point(308.978118896484, 381.302490234375), Point(294.474998474121, 376.658363342285)));

    toRender.push_back(curve);
    curve = new BezierCurve();
    curve->addPoint(BezierCurvePoint(Point(209.151306152344, 354.545036315918), Point(209.407836914063, 346.110900878906), Point(220.488075256348, 347.001892089844)));
    curve->addPoint(BezierCurvePoint(Point(187.315006256104, 335.502319335938), Point(184.844570159912, 336.19214630127), Point(194.298728942871, 333.55224609375)));
    curve->addPoint(BezierCurvePoint(Point(184.40453338623, 340.065055847168), Point(182.689304351807, 351.829833984375), Point(184.701747894287, 338.026428222656)));
    curve->addPoint(BezierCurvePoint(Point(204.363189697266, 374.430107116699), Point(206.926094055176, 375.48104095459), Point(192.952331542969, 369.751121520996)));
    curve->addPoint(BezierCurvePoint(Point(212.367050170898, 374.712295532227), Point(216.16845703125, 366.970138549805), Point(210.740432739258, 378.02515411377)));
    curve->addPoint(BezierCurvePoint(Point(224.162452697754, 373.881797790527), Point(235.350357055664, 381.779960632324), Point(221.255950927734, 371.829940795898)));
    curve->addPoint(BezierCurvePoint(Point(250.671524047852, 368.476112365723), Point(252.060127258301, 365.555465698242), Point(244.125755310059, 382.244087219238)));
    curve->addPoint(BezierCurvePoint(Point(258.247398376465, 363.373718261719), Point(261.735466003418, 365.321342468262), Point(254.00505065918, 361.004951477051)));
    curve->addPoint(BezierCurvePoint(Point(259.183868408203, 372.922119140625), Point(254.749855041504, 382.260704040527), Point(260.685562133789, 369.75936126709)));
    curve->addPoint(BezierCurvePoint(Point(237.007118225098, 389.722961425781), Point(217.572807312012, 390.542037963867), Point(249.410980224609, 389.2001953125)));
    curve->addPoint(BezierCurvePoint(Point(182.06568145752, 378.970848083496), Point(179.594249725342, 377.554275512695), Point(199.155120849609, 388.766487121582)));
    curve->addPoint(BezierCurvePoint(Point(174.438137054443, 377.344436645508), Point(171.190807342529, 380.506370544434), Point(177.562637329102, 374.302070617676)));
    curve->addPoint(BezierCurvePoint(Point(172.936191558838, 388.373428344727), Point(178.88920211792, 399.286811828613), Point(170.826427459717, 384.50569152832)));
    curve->addPoint(BezierCurvePoint(Point(200.601356506348, 403.162536621094), Point(204.537162780762, 403.497276306152), Point(189.286399841309, 402.200134277344)));
    curve->addPoint(BezierCurvePoint(Point(212.440040588379, 403.682373046875), Point(250.434814453125, 411.347579956055), Point(208.615745544434, 402.910858154297)));
    curve->addPoint(BezierCurvePoint(Point(272.954544067383, 355.949478149414), Point(273.49829864502, 347.088500976563), Point(270.518623352051, 395.64429473877)));
    curve->addPoint(BezierCurvePoint(Point(273.707542419434, 329.297492980957), Point(271.943572998047, 324.790489196777), Point(277.236968994141, 338.315299987793)));
    curve->addPoint(BezierCurvePoint(Point(264.869338989258, 325.884269714355), Point(264.286010742188, 326.625068664551), Point(271.614646911621, 317.318115234375)));
    curve->addPoint(BezierCurvePoint(Point(262.48738861084, 327.51448059082), Point(254.909248352051, 326.640174865723), Point(263.219741821289, 327.598960876465)));
    curve->addPoint(BezierCurvePoint(Point(246.976959228516, 336.896575927734), Point(247.065490722656, 343.560859680176), Point(246.793853759766, 323.111915588379)));
    curve->addPoint(BezierCurvePoint(Point(243.367652893066, 357.598114013672), Point(245.316719055176, 360.614959716797), Point(237.935829162598, 349.190620422363)));
    curve->addPoint(BezierCurvePoint(Point(240.296562194824, 364.704689025879), Point(237.443641662598, 365.768852233887), Point(243.552474975586, 363.490219116211)));
    curve->addPoint(BezierCurvePoint(Point(234.701065063477, 361.449348449707), Point(230.747291564941, 343.587524414063), Point(235.311378479004, 364.206573486328)));

    toRender.push_back(curve);
    curve = new BezierCurve();
    curve->addPoint(BezierCurvePoint(Point(259.221244812012, 227.737358093262), Point(246.556365966797, 228.640686035156), Point(252.039093017578, 223.528495788574)));
    curve->addPoint(BezierCurvePoint(Point(234.749839782715, 218.899703979492), Point(232.856254577637, 215.953857421875), Point(239.632690429688, 226.496131896973)));
    curve->addPoint(BezierCurvePoint(Point(225.982177734375, 215.728363037109), Point(222.95157623291, 217.600891113281), Point(229.947578430176, 213.278228759766)));
    curve->addPoint(BezierCurvePoint(Point(223.907135009766, 223.83570098877), Point(224.638801574707, 234.719833374023), Point(223.70393371582, 220.813179016113)));
    curve->addPoint(BezierCurvePoint(Point(238.887519836426, 248.615112304688), Point(252.700492858887, 259.622245788574), Point(230.734519958496, 242.118278503418)));
    curve->addPoint(BezierCurvePoint(Point(266.135330200195, 291.539108276367), Point(272.221160888672, 283.867950439453), Point(261.623245239258, 273.771560668945)));
    curve->addPoint(BezierCurvePoint(Point(283.556121826172, 269.841522216797), Point(283.270957946777, 267.353713989258), Point(285.145545959473, 283.70858001709)));
    curve->addPoint(BezierCurvePoint(Point(291.322311401367, 268.207763671875), Point(296.054420471191, 270.367172241211), Point(288.645767211914, 266.986358642578)));
    curve->addPoint(BezierCurvePoint(Point(300.483627319336, 279.375915527344), Point(298.732955932617, 285.094047546387), Point(302.803550720215, 271.798553466797)));
    curve->addPoint(BezierCurvePoint(Point(305.103607177734, 291.484519958496), Point(312.072395324707, 292.995231628418), Point(299.276161193848, 290.221206665039)));
    curve->addPoint(BezierCurvePoint(Point(311.539260864258, 282.745582580566), Point(322.815788269043, 274.357109069824), Point(309.247695922852, 284.450248718262)));
    curve->addPoint(BezierCurvePoint(Point(341.724060058594, 253.855590820313), Point(349.473587036133, 251.083374023438), Point(327.103408813477, 259.085838317871)));
    curve->addPoint(BezierCurvePoint(Point(347.743423461914, 235.801025390625), Point(345.584129333496, 233.956031799316), Point(360.709075927734, 246.879501342773)));
    curve->addPoint(BezierCurvePoint(Point(344.597373962402, 227.808380126953), Point(346.672645568848, 216.258087158203), Point(343.984771728516, 231.217895507813)));
    curve->addPoint(BezierCurvePoint(Point(334.928604125977, 220.293891906738), Point(316.898025512695, 225.907699584961), Point(346.739753723145, 216.616470336914)));
    curve->addPoint(BezierCurvePoint(Point(280.13525390625, 222.01114654541), Point(277.292747497559, 221.412048339844), Point(298.534515380859, 225.888862609863)));
    curve->addPoint(BezierCurvePoint(Point(274.182106018066, 217.032737731934), Point(274.856666564941, 213.324966430664), Point(273.448974609375, 221.062545776367)));
    curve->addPoint(BezierCurvePoint(Point(281.625755310059, 213.652404785156), Point(292.355369567871, 212.991485595703), Point(278.755210876465, 213.829193115234)));
    curve->addPoint(BezierCurvePoint(Point(313.891548156738, 211.346603393555), Point(327.428718566895, 206.519073486328), Point(302.899520874023, 215.266525268555)));
    curve->addPoint(BezierCurvePoint(Point(326.201202392578, 186.260559082031), Point(324.479667663574, 175.520324707031), Point(327.902687072754, 196.875869750977)));
    curve->addPoint(BezierCurvePoint(Point(307.705810546875, 176.871643066406), Point(296.315780639648, 175.339324951172), Point(315.851806640625, 177.967483520508)));
    curve->addPoint(BezierCurvePoint(Point(275.371719360352, 179.270782470703), Point(266.610008239746, 177.663619995117), Point(286.013740539551, 181.222961425781)));
    curve->addPoint(BezierCurvePoint(Point(257.905014038086, 187.853485107422), Point(253.811462402344, 194.031280517578), Point(261.487426757813, 182.447067260742)));
    curve->addPoint(BezierCurvePoint(Point(243.977027893066, 204.453048706055), Point(238.260932922363, 208.364273071289), Point(250.551338195801, 199.954605102539)));
    curve->addPoint(BezierCurvePoint(Point(245.294952392578, 219.499603271484), Point(248.464874267578, 221.793411254883), Point(239.174560546875, 215.070877075195)));

    toRender.push_back(curve);
    curve = new BezierCurve();
    curve->addPoint(BezierCurvePoint(Point(139.298137664795, 209.275360107422), Point(161.561737060547, 207.034103393555), Point(144.992088317871, 203.240249633789)));
    curve->addPoint(BezierCurvePoint(Point(157.58088684082, 227.442741394043), Point(154.662094116211, 242.539581298828), Point(161.478652954102, 207.282165527344)));
    curve->addPoint(BezierCurvePoint(Point(149.522106170654, 272.907897949219), Point(149.789680480957, 280.864151000977), Point(148.991798400879, 257.138214111328)));
    curve->addPoint(BezierCurvePoint(Point(140.330165863037, 292.899971008301), Point(121.931636810303, 312.293792724609), Point(145.50203704834, 287.44832611084)));
    curve->addPoint(BezierCurvePoint(Point(117.115173339844, 361.585144042969), Point(117.834594726563, 373.024337768555), Point(115.467063903809, 335.379386901855)));
    curve->addPoint(BezierCurvePoint(Point(116.672950744629, 396.016754150391), Point(110.821689605713, 435.753719329834), Point(118.331645965576, 384.752265930176)));
    curve->addPoint(BezierCurvePoint(Point(146.180728912354, 501.401229858398), Point(163.050636291504, 529.102083206177), Point(126.257858276367, 468.68733215332)));
    curve->addPoint(BezierCurvePoint(Point(210.733428955078, 569.933850288391), Point(223.054321289063, 578.210839748383), Point(184.398021697998, 552.242134094238)));
    curve->addPoint(BezierCurvePoint(Point(255.354766845703, 582.07213640213), Point(262.012802124023, 579.919285297394), Point(237.352867126465, 587.892986297607)));
    curve->addPoint(BezierCurvePoint(Point(277.602607727051, 582.865942955017), Point(299.580505371094, 586.660537719727), Point(270.292007446289, 581.603736877441)));
    curve->addPoint(BezierCurvePoint(Point(339.635101318359, 572.780190467834), Point(368.405776977539, 560.172065734863), Point(318.905662536621, 581.864413261414)));
    curve->addPoint(BezierCurvePoint(Point(407.20930480957, 516.286874771118), Point(422.038879394531, 491.784702301025), Point(392.761871337891, 540.157545089722)));
    curve->addPoint(BezierCurvePoint(Point(441.800674438477, 433.998676300049), Point(441.314208984375, 429.855777740479), Point(445.763900756836, 467.752738952637)));
    curve->addPoint(BezierCurvePoint(Point(444.501480102539, 419.582290649414), Point(436.999053955078, 422.095664978027), Point(443.335601806641, 425.418422698975)));
    curve->addPoint(BezierCurvePoint(Point(430.937942504883, 431.969146728516), Point(428.887573242188, 434.598072052002), Point(434.421981811523, 427.50203704834)));
    curve->addPoint(BezierCurvePoint(Point(423.461196899414, 438.269153594971), Point(419.226379394531, 437.276390075684), Point(427.621215820313, 439.244373321533)));
    curve->addPoint(BezierCurvePoint(Point(418.710983276367, 428.769950866699), Point(410.461303710938, 441.27717590332), Point(423.931549072266, 431.355457305908)));
    curve->addPoint(BezierCurvePoint(Point(393.718688964844, 466.708728790283), Point(384.350372314453, 481.173007965088), Point(401.994598388672, 453.931125640869)));
    curve->addPoint(BezierCurvePoint(Point(355.272514343262, 496.923122406006), Point(349.371551513672, 497.717697143555), Point(374.495086669922, 494.334720611572)));
    curve->addPoint(BezierCurvePoint(Point(343.186637878418, 492.646945953369), Point(338.04313659668, 484.854801177979), Point(346.529663085938, 497.711483001709)));
    curve->addPoint(BezierCurvePoint(Point(324.118148803711, 490.608776092529), Point(322.98429107666, 491.588115692139), Point(331.217056274414, 484.477306365967)));
    curve->addPoint(BezierCurvePoint(Point(320.583274841309, 493.387802124023), Point(316.388786315918, 496.101848602295), Point(321.83667755127, 492.576782226563)));
    curve->addPoint(BezierCurvePoint(Point(307.894660949707, 501.060024261475), Point(286.055557250977, 502.518013000488), Point(312.278938293457, 500.767318725586)));
    curve->addPoint(BezierCurvePoint(Point(244.402770996094, 513.893886566162), Point(222.418464660645, 513.537014007568), Point(266.208160400391, 514.247852325439)));
    curve->addPoint(BezierCurvePoint(Point(195.600379943848, 482.585655212402), Point(179.022319793701, 464.51953125), Point(209.019607543945, 497.209419250488)));
    curve->addPoint(BezierCurvePoint(Point(158.644649505615, 420.389671325684), Point(155.57596206665, 415.624122619629), Point(171.717739105225, 440.691501617432)));
    curve->addPoint(BezierCurvePoint(Point(155.219455718994, 404.511360168457), Point(156.643730163574, 372.924774169922), Point(154.967445373535, 410.100162506104)));
    curve->addPoint(BezierCurvePoint(Point(154.942794799805, 309.843040466309), Point(155.599262237549, 275.732872009277), Point(154.337905883789, 341.272796630859)));
    curve->addPoint(BezierCurvePoint(Point(190.203735351563, 216.027420043945), Point(209.702705383301, 198.787078857422), Point(161.777263641357, 241.16104888916)));
    curve->addPoint(BezierCurvePoint(Point(221.137550354004, 150.584518432617), Point(221.440200805664, 148.112503051758), Point(218.050895690918, 175.796997070313)));
    curve->addPoint(BezierCurvePoint(Point(223.203826904297, 143.762649536133), Point(235.76978302002, 136.126602172852), Point(220.810913085938, 145.216781616211)));
    curve->addPoint(BezierCurvePoint(Point(254.877708435059, 114.684722900391), Point(263.845001220703, 109.926910400391), Point(242.150985717773, 121.437057495117)));
    curve->addPoint(BezierCurvePoint(Point(260.459815979004, 96.1688690185547), Point(268.957580566406, 100.264755249023), Point(267.108215332031, 105.905044555664)));
    curve->addPoint(BezierCurvePoint(Point(280.545455932617, 111.698043823242), Point(284.264739990234, 120.073745727539), Point(276.722831726074, 103.089706420898)));
    curve->addPoint(BezierCurvePoint(Point(300.394638061523, 126.397933959961), Point(306.984924316406, 131.32438659668), Point(293.801445007324, 121.469329833984)));
    curve->addPoint(BezierCurvePoint(Point(322.792419433594, 125.372360229492), Point(334.011085510254, 116.574188232422), Point(313.68807220459, 132.51237487793)));
    curve->addPoint(BezierCurvePoint(Point(366.825645446777, 151.875228881836), Point(366.247512817383, 160.862182617188), Point(367.743255615234, 137.611038208008)));
    curve->addPoint(BezierCurvePoint(Point(353.18586730957, 174.443664550781), Point(348.468887329102, 180.463302612305), Point(358.704551696777, 167.401016235352)));
    curve->addPoint(BezierCurvePoint(Point(355.187187194824, 192.34423828125), Point(363.349868774414, 196.001083374023), Point(339.576118469238, 185.350570678711)));
    curve->addPoint(BezierCurvePoint(Point(377.849578857422, 196.921783447266), Point(378.147354125977, 196.70182800293), Point(368.092460632324, 204.129043579102)));
    curve->addPoint(BezierCurvePoint(Point(379.270637512207, 197.050323486328), Point(387.060607910156, 206.304153442383), Point(379.044158935547, 196.781295776367)));
    curve->addPoint(BezierCurvePoint(Point(406.413070678711, 219.888954162598), Point(420.77018737793, 232.435432434082), Point(397.736663818359, 212.30680847168)));
    curve->addPoint(BezierCurvePoint(Point(420.993530273438, 271.765937805176), Point(421.575668334961, 304.235893249512), Point(420.643203735352, 252.22380065918)));
    curve->addPoint(BezierCurvePoint(Point(418.187255859375, 368.785606384277), Point(416.375335693359, 379.661590576172), Point(423.580902099609, 336.41047668457)));
    curve->addPoint(BezierCurvePoint(Point(421.170135498047, 403.018524169922), Point(427.227081298828, 403.080207824707), Point(420.006225585938, 391.4443359375)));
    curve->addPoint(BezierCurvePoint(Point(428.16535949707, 394.797294616699), Point(436.573104858398, 365.379547119141), Point(427.354888916016, 397.632911682129)));
    curve->addPoint(BezierCurvePoint(Point(435.323364257813, 304.771842956543), Point(426.211441040039, 278.298110961914), Point(446.423904418945, 337.023239135742)));
    curve->addPoint(BezierCurvePoint(Point(444.198532104492, 223.754425048828), Point(432.18489074707, 222.554077148438), Point(431.545120239258, 250.318336486816)));
    curve->addPoint(BezierCurvePoint(Point(426.503814697266, 201.111465454102), Point(425.972579956055, 198.201232910156), Point(428.582061767578, 212.496322631836)));
    curve->addPoint(BezierCurvePoint(Point(423.787628173828, 192.857391357422), Point(408.058044433594, 186.698822021484), Point(425.52099609375, 193.536071777344)));
    curve->addPoint(BezierCurvePoint(Point(415.302337646484, 163.848358154297), Point(415.388259887695, 151.385009765625), Point(415.230285644531, 174.293060302734)));
    curve->addPoint(BezierCurvePoint(Point(400.426528930664, 133.943161010742), Point(378.192878723145, 112.140014648438), Point(408.124237060547, 141.491821289063)));
    curve->addPoint(BezierCurvePoint(Point(321.056442260742, 89.6891784667969), Point(301.298858642578, 86.9484558105469), Point(352.445526123047, 94.0433807373047)));
    curve->addPoint(BezierCurvePoint(Point(260.848182678223, 92.6038970947266), Point(247.446716308594, 96.9402923583984), Point(279.390815734863, 86.6039886474609)));
    curve->addPoint(BezierCurvePoint(Point(220.466285705566, 102.954391479492), Point(219.983184814453, 102.888885498047), Point(235.519844055176, 104.996200561523)));
    curve->addPoint(BezierCurvePoint(Point(218.979629516602, 103.033493041992), Point(220.86206817627, 114.642059326172), Point(219.475730895996, 103.00309753418)));
    curve->addPoint(BezierCurvePoint(Point(203.883728027344, 121.137313842773), Point(192.027374267578, 145.718444824219), Point(207.598022460938, 113.436767578125)));
    curve->addPoint(BezierCurvePoint(Point(166.276782989502, 193.900451660156), Point(163.893962860107, 198.533889770508), Point(178.764266967773, 169.618103027344)));
    curve->addPoint(BezierCurvePoint(Point(155.608863830566, 200.87580871582), Point(150.001728057861, 201.475891113281), Point(160.31721496582, 200.37190246582)));

    toRender.push_back(curve);

    
    myfile << "%!PS" << endl;
    
    for(uint i = 0; i < toRender.size(); i++){
        CurveRenderer::render(*toRender[i], 0.01, myfile);
        
    }
    
    
    myfile.close();
    
    /*LinearPointInterpolator inter = LinearPointInterpolator();
    Point res = inter.interpolate(Point(), Point(10, 10), .5);
    */
    return 0;
}