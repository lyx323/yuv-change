# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/admins/workspace/estimate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/admins/workspace/estimate/bin

# Include any dependencies generated for this target.
include CMakeFiles/estimate_error.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/estimate_error.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/estimate_error.dir/flags.make

CMakeFiles/estimate_error.dir/src/error.cpp.o: CMakeFiles/estimate_error.dir/flags.make
CMakeFiles/estimate_error.dir/src/error.cpp.o: ../src/error.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/admins/workspace/estimate/bin/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/estimate_error.dir/src/error.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/estimate_error.dir/src/error.cpp.o -c /home/admins/workspace/estimate/src/error.cpp

CMakeFiles/estimate_error.dir/src/error.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/estimate_error.dir/src/error.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/admins/workspace/estimate/src/error.cpp > CMakeFiles/estimate_error.dir/src/error.cpp.i

CMakeFiles/estimate_error.dir/src/error.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/estimate_error.dir/src/error.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/admins/workspace/estimate/src/error.cpp -o CMakeFiles/estimate_error.dir/src/error.cpp.s

CMakeFiles/estimate_error.dir/src/error.cpp.o.requires:
.PHONY : CMakeFiles/estimate_error.dir/src/error.cpp.o.requires

CMakeFiles/estimate_error.dir/src/error.cpp.o.provides: CMakeFiles/estimate_error.dir/src/error.cpp.o.requires
	$(MAKE) -f CMakeFiles/estimate_error.dir/build.make CMakeFiles/estimate_error.dir/src/error.cpp.o.provides.build
.PHONY : CMakeFiles/estimate_error.dir/src/error.cpp.o.provides

CMakeFiles/estimate_error.dir/src/error.cpp.o.provides.build: CMakeFiles/estimate_error.dir/src/error.cpp.o

# Object files for target estimate_error
estimate_error_OBJECTS = \
"CMakeFiles/estimate_error.dir/src/error.cpp.o"

# External object files for target estimate_error
estimate_error_EXTERNAL_OBJECTS =

estimate_error: CMakeFiles/estimate_error.dir/src/error.cpp.o
estimate_error: CMakeFiles/estimate_error.dir/build.make
estimate_error: CMakeFiles/estimate_error.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable estimate_error"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/estimate_error.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/estimate_error.dir/build: estimate_error
.PHONY : CMakeFiles/estimate_error.dir/build

CMakeFiles/estimate_error.dir/requires: CMakeFiles/estimate_error.dir/src/error.cpp.o.requires
.PHONY : CMakeFiles/estimate_error.dir/requires

CMakeFiles/estimate_error.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/estimate_error.dir/cmake_clean.cmake
.PHONY : CMakeFiles/estimate_error.dir/clean

CMakeFiles/estimate_error.dir/depend:
	cd /home/admins/workspace/estimate/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/admins/workspace/estimate /home/admins/workspace/estimate /home/admins/workspace/estimate/bin /home/admins/workspace/estimate/bin /home/admins/workspace/estimate/bin/CMakeFiles/estimate_error.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/estimate_error.dir/depend

