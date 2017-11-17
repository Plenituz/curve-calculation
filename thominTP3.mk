##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=thominTP3
ConfigurationName      :=Debug
WorkspacePath          :=/media/plenituz/DATA/C/codelite-worspace
ProjectPath            :=/media/plenituz/DATA/C/codelite-worspace/thominTP3
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=plenituz
Date                   :=14/11/17
CodeLitePath           :=/home/plenituz/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="thominTP3.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Vector.cpp$(ObjectSuffix) $(IntermediateDirectory)/CurveRenderer.cpp$(ObjectSuffix) $(IntermediateDirectory)/BezierCurve.cpp$(ObjectSuffix) $(IntermediateDirectory)/ICurve.cpp$(ObjectSuffix) $(IntermediateDirectory)/PolyLine.cpp$(ObjectSuffix) $(IntermediateDirectory)/BezierCurvePoint.cpp$(ObjectSuffix) $(IntermediateDirectory)/Point.cpp$(ObjectSuffix) $(IntermediateDirectory)/BezierPointInterpolator.cpp$(ObjectSuffix) $(IntermediateDirectory)/LinearInterpolator.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/LinearPointInterpolator.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Vector.cpp$(ObjectSuffix): Vector.cpp $(IntermediateDirectory)/Vector.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/Vector.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Vector.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Vector.cpp$(DependSuffix): Vector.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Vector.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Vector.cpp$(DependSuffix) -MM Vector.cpp

$(IntermediateDirectory)/Vector.cpp$(PreprocessSuffix): Vector.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Vector.cpp$(PreprocessSuffix) Vector.cpp

$(IntermediateDirectory)/CurveRenderer.cpp$(ObjectSuffix): CurveRenderer.cpp $(IntermediateDirectory)/CurveRenderer.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/CurveRenderer.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CurveRenderer.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CurveRenderer.cpp$(DependSuffix): CurveRenderer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CurveRenderer.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CurveRenderer.cpp$(DependSuffix) -MM CurveRenderer.cpp

$(IntermediateDirectory)/CurveRenderer.cpp$(PreprocessSuffix): CurveRenderer.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CurveRenderer.cpp$(PreprocessSuffix) CurveRenderer.cpp

$(IntermediateDirectory)/BezierCurve.cpp$(ObjectSuffix): BezierCurve.cpp $(IntermediateDirectory)/BezierCurve.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/BezierCurve.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BezierCurve.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/BezierCurve.cpp$(DependSuffix): BezierCurve.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/BezierCurve.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/BezierCurve.cpp$(DependSuffix) -MM BezierCurve.cpp

$(IntermediateDirectory)/BezierCurve.cpp$(PreprocessSuffix): BezierCurve.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/BezierCurve.cpp$(PreprocessSuffix) BezierCurve.cpp

$(IntermediateDirectory)/ICurve.cpp$(ObjectSuffix): ICurve.cpp $(IntermediateDirectory)/ICurve.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/ICurve.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ICurve.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ICurve.cpp$(DependSuffix): ICurve.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ICurve.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ICurve.cpp$(DependSuffix) -MM ICurve.cpp

$(IntermediateDirectory)/ICurve.cpp$(PreprocessSuffix): ICurve.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ICurve.cpp$(PreprocessSuffix) ICurve.cpp

$(IntermediateDirectory)/PolyLine.cpp$(ObjectSuffix): PolyLine.cpp $(IntermediateDirectory)/PolyLine.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/PolyLine.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PolyLine.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PolyLine.cpp$(DependSuffix): PolyLine.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PolyLine.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PolyLine.cpp$(DependSuffix) -MM PolyLine.cpp

$(IntermediateDirectory)/PolyLine.cpp$(PreprocessSuffix): PolyLine.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PolyLine.cpp$(PreprocessSuffix) PolyLine.cpp

$(IntermediateDirectory)/BezierCurvePoint.cpp$(ObjectSuffix): BezierCurvePoint.cpp $(IntermediateDirectory)/BezierCurvePoint.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/BezierCurvePoint.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BezierCurvePoint.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/BezierCurvePoint.cpp$(DependSuffix): BezierCurvePoint.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/BezierCurvePoint.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/BezierCurvePoint.cpp$(DependSuffix) -MM BezierCurvePoint.cpp

$(IntermediateDirectory)/BezierCurvePoint.cpp$(PreprocessSuffix): BezierCurvePoint.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/BezierCurvePoint.cpp$(PreprocessSuffix) BezierCurvePoint.cpp

$(IntermediateDirectory)/Point.cpp$(ObjectSuffix): Point.cpp $(IntermediateDirectory)/Point.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/Point.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Point.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Point.cpp$(DependSuffix): Point.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Point.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Point.cpp$(DependSuffix) -MM Point.cpp

$(IntermediateDirectory)/Point.cpp$(PreprocessSuffix): Point.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Point.cpp$(PreprocessSuffix) Point.cpp

$(IntermediateDirectory)/BezierPointInterpolator.cpp$(ObjectSuffix): BezierPointInterpolator.cpp $(IntermediateDirectory)/BezierPointInterpolator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/BezierPointInterpolator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BezierPointInterpolator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/BezierPointInterpolator.cpp$(DependSuffix): BezierPointInterpolator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/BezierPointInterpolator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/BezierPointInterpolator.cpp$(DependSuffix) -MM BezierPointInterpolator.cpp

$(IntermediateDirectory)/BezierPointInterpolator.cpp$(PreprocessSuffix): BezierPointInterpolator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/BezierPointInterpolator.cpp$(PreprocessSuffix) BezierPointInterpolator.cpp

$(IntermediateDirectory)/LinearInterpolator.cpp$(ObjectSuffix): LinearInterpolator.cpp $(IntermediateDirectory)/LinearInterpolator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/LinearInterpolator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LinearInterpolator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LinearInterpolator.cpp$(DependSuffix): LinearInterpolator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LinearInterpolator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LinearInterpolator.cpp$(DependSuffix) -MM LinearInterpolator.cpp

$(IntermediateDirectory)/LinearInterpolator.cpp$(PreprocessSuffix): LinearInterpolator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LinearInterpolator.cpp$(PreprocessSuffix) LinearInterpolator.cpp

$(IntermediateDirectory)/LinearPointInterpolator.cpp$(ObjectSuffix): LinearPointInterpolator.cpp $(IntermediateDirectory)/LinearPointInterpolator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/LinearPointInterpolator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LinearPointInterpolator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LinearPointInterpolator.cpp$(DependSuffix): LinearPointInterpolator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LinearPointInterpolator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LinearPointInterpolator.cpp$(DependSuffix) -MM LinearPointInterpolator.cpp

$(IntermediateDirectory)/LinearPointInterpolator.cpp$(PreprocessSuffix): LinearPointInterpolator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LinearPointInterpolator.cpp$(PreprocessSuffix) LinearPointInterpolator.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


