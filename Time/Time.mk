##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Time
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/ahmed/OneDrive/Desktop/Time
ProjectPath            :=C:/Users/ahmed/OneDrive/Desktop/Time
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ahmed
Date                   :=16/11/2018
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe" -shared -fPIC
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
ObjectsFileList        :="Time.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/windres.exe"
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/ar.exe" rcu
CXX      := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe"
CC       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/gcc.exe"
CXXFLAGS :=  -g -Wall $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Appointment.cpp$(ObjectSuffix) $(IntermediateDirectory)/DayAppointments.cpp$(ObjectSuffix) $(IntermediateDirectory)/Timeclass.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Appointment.cpp$(ObjectSuffix): Appointment.cpp $(IntermediateDirectory)/Appointment.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ahmed/OneDrive/Desktop/Time/Appointment.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Appointment.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Appointment.cpp$(DependSuffix): Appointment.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Appointment.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Appointment.cpp$(DependSuffix) -MM Appointment.cpp

$(IntermediateDirectory)/Appointment.cpp$(PreprocessSuffix): Appointment.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Appointment.cpp$(PreprocessSuffix) Appointment.cpp

$(IntermediateDirectory)/DayAppointments.cpp$(ObjectSuffix): DayAppointments.cpp $(IntermediateDirectory)/DayAppointments.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ahmed/OneDrive/Desktop/Time/DayAppointments.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DayAppointments.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DayAppointments.cpp$(DependSuffix): DayAppointments.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DayAppointments.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DayAppointments.cpp$(DependSuffix) -MM DayAppointments.cpp

$(IntermediateDirectory)/DayAppointments.cpp$(PreprocessSuffix): DayAppointments.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DayAppointments.cpp$(PreprocessSuffix) DayAppointments.cpp

$(IntermediateDirectory)/Timeclass.cpp$(ObjectSuffix): Timeclass.cpp $(IntermediateDirectory)/Timeclass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ahmed/OneDrive/Desktop/Time/Timeclass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Timeclass.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Timeclass.cpp$(DependSuffix): Timeclass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Timeclass.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Timeclass.cpp$(DependSuffix) -MM Timeclass.cpp

$(IntermediateDirectory)/Timeclass.cpp$(PreprocessSuffix): Timeclass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Timeclass.cpp$(PreprocessSuffix) Timeclass.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ahmed/OneDrive/Desktop/Time/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


