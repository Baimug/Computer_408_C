# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\LIUWEI\CLionProjects\6\work1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\LIUWEI\CLionProjects\6\work1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/work1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/work1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/work1.dir/flags.make

CMakeFiles/work1.dir/main.c.obj: CMakeFiles/work1.dir/flags.make
CMakeFiles/work1.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\LIUWEI\CLionProjects\6\work1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/work1.dir/main.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\work1.dir\main.c.obj -c C:\Users\LIUWEI\CLionProjects\6\work1\main.c

CMakeFiles/work1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/work1.dir/main.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\LIUWEI\CLionProjects\6\work1\main.c > CMakeFiles\work1.dir\main.c.i

CMakeFiles/work1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/work1.dir/main.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\LIUWEI\CLionProjects\6\work1\main.c -o CMakeFiles\work1.dir\main.c.s

# Object files for target work1
work1_OBJECTS = \
"CMakeFiles/work1.dir/main.c.obj"

# External object files for target work1
work1_EXTERNAL_OBJECTS =

work1.exe: CMakeFiles/work1.dir/main.c.obj
work1.exe: CMakeFiles/work1.dir/build.make
work1.exe: CMakeFiles/work1.dir/linklibs.rsp
work1.exe: CMakeFiles/work1.dir/objects1.rsp
work1.exe: CMakeFiles/work1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\LIUWEI\CLionProjects\6\work1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable work1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\work1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/work1.dir/build: work1.exe

.PHONY : CMakeFiles/work1.dir/build

CMakeFiles/work1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\work1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/work1.dir/clean

CMakeFiles/work1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\LIUWEI\CLionProjects\6\work1 C:\Users\LIUWEI\CLionProjects\6\work1 C:\Users\LIUWEI\CLionProjects\6\work1\cmake-build-debug C:\Users\LIUWEI\CLionProjects\6\work1\cmake-build-debug C:\Users\LIUWEI\CLionProjects\6\work1\cmake-build-debug\CMakeFiles\work1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/work1.dir/depend

