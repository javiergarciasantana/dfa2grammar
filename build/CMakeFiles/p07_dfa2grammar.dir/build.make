# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/usuario/practicas/CyA/p07_dfa2grammar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/practicas/CyA/p07_dfa2grammar/build

# Include any dependencies generated for this target.
include CMakeFiles/p07_dfa2grammar.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/p07_dfa2grammar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/p07_dfa2grammar.dir/flags.make

CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.o: CMakeFiles/p07_dfa2grammar.dir/flags.make
CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.o: ../src/alphabet.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p07_dfa2grammar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.o -c /home/usuario/practicas/CyA/p07_dfa2grammar/src/alphabet.cc

CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p07_dfa2grammar/src/alphabet.cc > CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.i

CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p07_dfa2grammar/src/alphabet.cc -o CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.s

CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.o: CMakeFiles/p07_dfa2grammar.dir/flags.make
CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.o: ../src/symbol.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p07_dfa2grammar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.o -c /home/usuario/practicas/CyA/p07_dfa2grammar/src/symbol.cc

CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p07_dfa2grammar/src/symbol.cc > CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.i

CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p07_dfa2grammar/src/symbol.cc -o CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.s

CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.o: CMakeFiles/p07_dfa2grammar.dir/flags.make
CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.o: ../src/p07_dfa2grammar.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p07_dfa2grammar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.o -c /home/usuario/practicas/CyA/p07_dfa2grammar/src/p07_dfa2grammar.cc

CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p07_dfa2grammar/src/p07_dfa2grammar.cc > CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.i

CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p07_dfa2grammar/src/p07_dfa2grammar.cc -o CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.s

CMakeFiles/p07_dfa2grammar.dir/src/state.cc.o: CMakeFiles/p07_dfa2grammar.dir/flags.make
CMakeFiles/p07_dfa2grammar.dir/src/state.cc.o: ../src/state.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p07_dfa2grammar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/p07_dfa2grammar.dir/src/state.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p07_dfa2grammar.dir/src/state.cc.o -c /home/usuario/practicas/CyA/p07_dfa2grammar/src/state.cc

CMakeFiles/p07_dfa2grammar.dir/src/state.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p07_dfa2grammar.dir/src/state.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p07_dfa2grammar/src/state.cc > CMakeFiles/p07_dfa2grammar.dir/src/state.cc.i

CMakeFiles/p07_dfa2grammar.dir/src/state.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p07_dfa2grammar.dir/src/state.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p07_dfa2grammar/src/state.cc -o CMakeFiles/p07_dfa2grammar.dir/src/state.cc.s

CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.o: CMakeFiles/p07_dfa2grammar.dir/flags.make
CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.o: ../src/usage.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p07_dfa2grammar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.o -c /home/usuario/practicas/CyA/p07_dfa2grammar/src/usage.cc

CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p07_dfa2grammar/src/usage.cc > CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.i

CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p07_dfa2grammar/src/usage.cc -o CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.s

CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.o: CMakeFiles/p07_dfa2grammar.dir/flags.make
CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.o: ../src/grammar.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p07_dfa2grammar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.o -c /home/usuario/practicas/CyA/p07_dfa2grammar/src/grammar.cc

CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p07_dfa2grammar/src/grammar.cc > CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.i

CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p07_dfa2grammar/src/grammar.cc -o CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.s

CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.o: CMakeFiles/p07_dfa2grammar.dir/flags.make
CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.o: ../src/fa.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p07_dfa2grammar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.o -c /home/usuario/practicas/CyA/p07_dfa2grammar/src/fa.cc

CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p07_dfa2grammar/src/fa.cc > CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.i

CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p07_dfa2grammar/src/fa.cc -o CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.s

# Object files for target p07_dfa2grammar
p07_dfa2grammar_OBJECTS = \
"CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.o" \
"CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.o" \
"CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.o" \
"CMakeFiles/p07_dfa2grammar.dir/src/state.cc.o" \
"CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.o" \
"CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.o" \
"CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.o"

# External object files for target p07_dfa2grammar
p07_dfa2grammar_EXTERNAL_OBJECTS =

p07_dfa2grammar: CMakeFiles/p07_dfa2grammar.dir/src/alphabet.cc.o
p07_dfa2grammar: CMakeFiles/p07_dfa2grammar.dir/src/symbol.cc.o
p07_dfa2grammar: CMakeFiles/p07_dfa2grammar.dir/src/p07_dfa2grammar.cc.o
p07_dfa2grammar: CMakeFiles/p07_dfa2grammar.dir/src/state.cc.o
p07_dfa2grammar: CMakeFiles/p07_dfa2grammar.dir/src/usage.cc.o
p07_dfa2grammar: CMakeFiles/p07_dfa2grammar.dir/src/grammar.cc.o
p07_dfa2grammar: CMakeFiles/p07_dfa2grammar.dir/src/fa.cc.o
p07_dfa2grammar: CMakeFiles/p07_dfa2grammar.dir/build.make
p07_dfa2grammar: CMakeFiles/p07_dfa2grammar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/practicas/CyA/p07_dfa2grammar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable p07_dfa2grammar"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/p07_dfa2grammar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/p07_dfa2grammar.dir/build: p07_dfa2grammar

.PHONY : CMakeFiles/p07_dfa2grammar.dir/build

CMakeFiles/p07_dfa2grammar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/p07_dfa2grammar.dir/cmake_clean.cmake
.PHONY : CMakeFiles/p07_dfa2grammar.dir/clean

CMakeFiles/p07_dfa2grammar.dir/depend:
	cd /home/usuario/practicas/CyA/p07_dfa2grammar/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/practicas/CyA/p07_dfa2grammar /home/usuario/practicas/CyA/p07_dfa2grammar /home/usuario/practicas/CyA/p07_dfa2grammar/build /home/usuario/practicas/CyA/p07_dfa2grammar/build /home/usuario/practicas/CyA/p07_dfa2grammar/build/CMakeFiles/p07_dfa2grammar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/p07_dfa2grammar.dir/depend

