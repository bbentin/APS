# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/rreyes/Qt/Tools/CMake/bin/cmake

# The command to remove a file.
RM = /home/rreyes/Qt/Tools/CMake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rreyes/Documentos/Faculdade/2024-1/Analise_Projeto_Sistemas/Projeto/Codigo/Lanchonete

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rreyes/Documentos/Faculdade/2024-1/Analise_Projeto_Sistemas/Projeto/Codigo/Lanchonete/build/Desktop_Qt_6_7_0-Debug

# Utility rule file for Lanchonete_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/Lanchonete_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Lanchonete_autogen.dir/progress.make

CMakeFiles/Lanchonete_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/rreyes/Documentos/Faculdade/2024-1/Analise_Projeto_Sistemas/Projeto/Codigo/Lanchonete/build/Desktop_Qt_6_7_0-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Lanchonete"
	/home/rreyes/Qt/Tools/CMake/bin/cmake -E cmake_autogen /home/rreyes/Documentos/Faculdade/2024-1/Analise_Projeto_Sistemas/Projeto/Codigo/Lanchonete/build/Desktop_Qt_6_7_0-Debug/CMakeFiles/Lanchonete_autogen.dir/AutogenInfo.json Debug

Lanchonete_autogen: CMakeFiles/Lanchonete_autogen
Lanchonete_autogen: CMakeFiles/Lanchonete_autogen.dir/build.make
.PHONY : Lanchonete_autogen

# Rule to build all files generated by this target.
CMakeFiles/Lanchonete_autogen.dir/build: Lanchonete_autogen
.PHONY : CMakeFiles/Lanchonete_autogen.dir/build

CMakeFiles/Lanchonete_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lanchonete_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lanchonete_autogen.dir/clean

CMakeFiles/Lanchonete_autogen.dir/depend:
	cd /home/rreyes/Documentos/Faculdade/2024-1/Analise_Projeto_Sistemas/Projeto/Codigo/Lanchonete/build/Desktop_Qt_6_7_0-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rreyes/Documentos/Faculdade/2024-1/Analise_Projeto_Sistemas/Projeto/Codigo/Lanchonete /home/rreyes/Documentos/Faculdade/2024-1/Analise_Projeto_Sistemas/Projeto/Codigo/Lanchonete /home/rreyes/Documentos/Faculdade/2024-1/Analise_Projeto_Sistemas/Projeto/Codigo/Lanchonete/build/Desktop_Qt_6_7_0-Debug /home/rreyes/Documentos/Faculdade/2024-1/Analise_Projeto_Sistemas/Projeto/Codigo/Lanchonete/build/Desktop_Qt_6_7_0-Debug /home/rreyes/Documentos/Faculdade/2024-1/Analise_Projeto_Sistemas/Projeto/Codigo/Lanchonete/build/Desktop_Qt_6_7_0-Debug/CMakeFiles/Lanchonete_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Lanchonete_autogen.dir/depend
