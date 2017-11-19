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
Date                   :=17/11/17
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Vector.cpp$(ObjectSuffix) $(IntermediateDirectory)/CurveRenderer.cpp$(ObjectSuffix) $(IntermediateDirectory)/BezierCurve.cpp$(ObjectSuffix) $(IntermediateDirectory)/ICurve.cpp$(ObjectSuffix) $(IntermediateDirectory)/PolyLine.cpp$(ObjectSuffix) $(IntermediateDirectory)/HermitteCurve.cpp$(ObjectSuffix) $(IntermediateDirectory)/ZigzagCurve.cpp$(ObjectSuffix) $(IntermediateDirectory)/ZigzagBezierCurve.cpp$(ObjectSuffix) $(IntermediateDirectory)/Point.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/BezierPointInterpolator.cpp$(ObjectSuffix) $(IntermediateDirectory)/LinearInterpolator.cpp$(ObjectSuffix) $(IntermediateDirectory)/LinearPointInterpolator.cpp$(ObjectSuffix) $(IntermediateDirectory)/HermittePointInterpolator.cpp$(ObjectSuffix) $(IntermediateDirectory)/MathPointInterpolator.cpp$(ObjectSuffix) $(IntermediateDirectory)/ZigzagPointInterpolator.cpp$(ObjectSuffix) $(IntermediateDirectory)/ZigzagBezierPointInterpolator.cpp$(ObjectSuffix) 



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

$(IntermediateDirectory)/HermitteCurve.cpp$(ObjectSuffix): HermitteCurve.cpp $(IntermediateDirectory)/HermitteCurve.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/HermitteCurve.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/HermitteCurve.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/HermitteCurve.cpp$(DependSuffix): HermitteCurve.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/HermitteCurve.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/HermitteCurve.cpp$(DependSuffix) -MM HermitteCurve.cpp

$(IntermediateDirectory)/HermitteCurve.cpp$(PreprocessSuffix): HermitteCurve.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/HermitteCurve.cpp$(PreprocessSuffix) HermitteCurve.cpp

$(IntermediateDirectory)/ZigzagCurve.cpp$(ObjectSuffix): ZigzagCurve.cpp $(IntermediateDirectory)/ZigzagCurve.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/ZigzagCurve.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ZigzagCurve.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ZigzagCurve.cpp$(DependSuffix): ZigzagCurve.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ZigzagCurve.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ZigzagCurve.cpp$(DependSuffix) -MM ZigzagCurve.cpp

$(IntermediateDirectory)/ZigzagCurve.cpp$(PreprocessSuffix): ZigzagCurve.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ZigzagCurve.cpp$(PreprocessSuffix) ZigzagCurve.cpp

$(IntermediateDirectory)/ZigzagBezierCurve.cpp$(ObjectSuffix): ZigzagBezierCurve.cpp $(IntermediateDirectory)/ZigzagBezierCurve.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/ZigzagBezierCurve.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ZigzagBezierCurve.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ZigzagBezierCurve.cpp$(DependSuffix): ZigzagBezierCurve.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ZigzagBezierCurve.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ZigzagBezierCurve.cpp$(DependSuffix) -MM ZigzagBezierCurve.cpp

$(IntermediateDirectory)/ZigzagBezierCurve.cpp$(PreprocessSuffix): ZigzagBezierCurve.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ZigzagBezierCurve.cpp$(PreprocessSuffix) ZigzagBezierCurve.cpp

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

$(IntermediateDirectory)/HermittePointInterpolator.cpp$(ObjectSuffix): HermittePointInterpolator.cpp $(IntermediateDirectory)/HermittePointInterpolator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/HermittePointInterpolator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/HermittePointInterpolator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/HermittePointInterpolator.cpp$(DependSuffix): HermittePointInterpolator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/HermittePointInterpolator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/HermittePointInterpolator.cpp$(DependSuffix) -MM HermittePointInterpolator.cpp

$(IntermediateDirectory)/HermittePointInterpolator.cpp$(PreprocessSuffix): HermittePointInterpolator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/HermittePointInterpolator.cpp$(PreprocessSuffix) HermittePointInterpolator.cpp

$(IntermediateDirectory)/MathPointInterpolator.cpp$(ObjectSuffix): MathPointInterpolator.cpp $(IntermediateDirectory)/MathPointInterpolator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/MathPointInterpolator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MathPointInterpolator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MathPointInterpolator.cpp$(DependSuffix): MathPointInterpolator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MathPointInterpolator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MathPointInterpolator.cpp$(DependSuffix) -MM MathPointInterpolator.cpp

$(IntermediateDirectory)/MathPointInterpolator.cpp$(PreprocessSuffix): MathPointInterpolator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MathPointInterpolator.cpp$(PreprocessSuffix) MathPointInterpolator.cpp

$(IntermediateDirectory)/ZigzagPointInterpolator.cpp$(ObjectSuffix): ZigzagPointInterpolator.cpp $(IntermediateDirectory)/ZigzagPointInterpolator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/ZigzagPointInterpolator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ZigzagPointInterpolator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ZigzagPointInterpolator.cpp$(DependSuffix): ZigzagPointInterpolator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ZigzagPointInterpolator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ZigzagPointInterpolator.cpp$(DependSuffix) -MM ZigzagPointInterpolator.cpp

$(IntermediateDirectory)/ZigzagPointInterpolator.cpp$(PreprocessSuffix): ZigzagPointInterpolator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ZigzagPointInterpolator.cpp$(PreprocessSuffix) ZigzagPointInterpolator.cpp

$(IntermediateDirectory)/ZigzagBezierPointInterpolator.cpp$(ObjectSuffix): ZigzagBezierPointInterpolator.cpp $(IntermediateDirectory)/ZigzagBezierPointInterpolator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/plenituz/DATA/C/codelite-worspace/thominTP3/ZigzagBezierPointInterpolator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ZigzagBezierPointInterpolator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ZigzagBezierPointInterpolator.cpp$(DependSuffix): ZigzagBezierPointInterpolator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ZigzagBezierPointInterpolator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ZigzagBezierPointInterpolator.cpp$(DependSuffix) -MM ZigzagBezierPointInterpolator.cpp

$(IntermediateDirectory)/ZigzagBezierPointInterpolator.cpp$(PreprocessSuffix): ZigzagBezierPointInterpolator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ZigzagBezierPointInterpolator.cpp$(PreprocessSuffix) ZigzagBezierPointInterpolator.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


