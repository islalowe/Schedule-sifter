# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /tmp/Schedule-sifter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/Schedule-sifter/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Schedule_sifter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Schedule_sifter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Schedule_sifter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Schedule_sifter.dir/flags.make

CMakeFiles/Schedule_sifter.dir/main.cpp.o: CMakeFiles/Schedule_sifter.dir/flags.make
CMakeFiles/Schedule_sifter.dir/main.cpp.o: ../main.cpp
CMakeFiles/Schedule_sifter.dir/main.cpp.o: CMakeFiles/Schedule_sifter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/Schedule-sifter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Schedule_sifter.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Schedule_sifter.dir/main.cpp.o -MF CMakeFiles/Schedule_sifter.dir/main.cpp.o.d -o CMakeFiles/Schedule_sifter.dir/main.cpp.o -c /tmp/Schedule-sifter/main.cpp

CMakeFiles/Schedule_sifter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Schedule_sifter.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/Schedule-sifter/main.cpp > CMakeFiles/Schedule_sifter.dir/main.cpp.i

CMakeFiles/Schedule_sifter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Schedule_sifter.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/Schedule-sifter/main.cpp -o CMakeFiles/Schedule_sifter.dir/main.cpp.s

CMakeFiles/Schedule_sifter.dir/object.cpp.o: CMakeFiles/Schedule_sifter.dir/flags.make
CMakeFiles/Schedule_sifter.dir/object.cpp.o: ../object.cpp
CMakeFiles/Schedule_sifter.dir/object.cpp.o: CMakeFiles/Schedule_sifter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/Schedule-sifter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Schedule_sifter.dir/object.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Schedule_sifter.dir/object.cpp.o -MF CMakeFiles/Schedule_sifter.dir/object.cpp.o.d -o CMakeFiles/Schedule_sifter.dir/object.cpp.o -c /tmp/Schedule-sifter/object.cpp

CMakeFiles/Schedule_sifter.dir/object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Schedule_sifter.dir/object.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/Schedule-sifter/object.cpp > CMakeFiles/Schedule_sifter.dir/object.cpp.i

CMakeFiles/Schedule_sifter.dir/object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Schedule_sifter.dir/object.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/Schedule-sifter/object.cpp -o CMakeFiles/Schedule_sifter.dir/object.cpp.s

CMakeFiles/Schedule_sifter.dir/list.cpp.o: CMakeFiles/Schedule_sifter.dir/flags.make
CMakeFiles/Schedule_sifter.dir/list.cpp.o: ../list.cpp
CMakeFiles/Schedule_sifter.dir/list.cpp.o: CMakeFiles/Schedule_sifter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/Schedule-sifter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Schedule_sifter.dir/list.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Schedule_sifter.dir/list.cpp.o -MF CMakeFiles/Schedule_sifter.dir/list.cpp.o.d -o CMakeFiles/Schedule_sifter.dir/list.cpp.o -c /tmp/Schedule-sifter/list.cpp

CMakeFiles/Schedule_sifter.dir/list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Schedule_sifter.dir/list.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/Schedule-sifter/list.cpp > CMakeFiles/Schedule_sifter.dir/list.cpp.i

CMakeFiles/Schedule_sifter.dir/list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Schedule_sifter.dir/list.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/Schedule-sifter/list.cpp -o CMakeFiles/Schedule_sifter.dir/list.cpp.s

CMakeFiles/Schedule_sifter.dir/person.cpp.o: CMakeFiles/Schedule_sifter.dir/flags.make
CMakeFiles/Schedule_sifter.dir/person.cpp.o: ../person.cpp
CMakeFiles/Schedule_sifter.dir/person.cpp.o: CMakeFiles/Schedule_sifter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/Schedule-sifter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Schedule_sifter.dir/person.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Schedule_sifter.dir/person.cpp.o -MF CMakeFiles/Schedule_sifter.dir/person.cpp.o.d -o CMakeFiles/Schedule_sifter.dir/person.cpp.o -c /tmp/Schedule-sifter/person.cpp

CMakeFiles/Schedule_sifter.dir/person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Schedule_sifter.dir/person.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/Schedule-sifter/person.cpp > CMakeFiles/Schedule_sifter.dir/person.cpp.i

CMakeFiles/Schedule_sifter.dir/person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Schedule_sifter.dir/person.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/Schedule-sifter/person.cpp -o CMakeFiles/Schedule_sifter.dir/person.cpp.s

CMakeFiles/Schedule_sifter.dir/comparable.cpp.o: CMakeFiles/Schedule_sifter.dir/flags.make
CMakeFiles/Schedule_sifter.dir/comparable.cpp.o: ../comparable.cpp
CMakeFiles/Schedule_sifter.dir/comparable.cpp.o: CMakeFiles/Schedule_sifter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/Schedule-sifter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Schedule_sifter.dir/comparable.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Schedule_sifter.dir/comparable.cpp.o -MF CMakeFiles/Schedule_sifter.dir/comparable.cpp.o.d -o CMakeFiles/Schedule_sifter.dir/comparable.cpp.o -c /tmp/Schedule-sifter/comparable.cpp

CMakeFiles/Schedule_sifter.dir/comparable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Schedule_sifter.dir/comparable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/Schedule-sifter/comparable.cpp > CMakeFiles/Schedule_sifter.dir/comparable.cpp.i

CMakeFiles/Schedule_sifter.dir/comparable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Schedule_sifter.dir/comparable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/Schedule-sifter/comparable.cpp -o CMakeFiles/Schedule_sifter.dir/comparable.cpp.s

CMakeFiles/Schedule_sifter.dir/schedule.cpp.o: CMakeFiles/Schedule_sifter.dir/flags.make
CMakeFiles/Schedule_sifter.dir/schedule.cpp.o: ../schedule.cpp
CMakeFiles/Schedule_sifter.dir/schedule.cpp.o: CMakeFiles/Schedule_sifter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/Schedule-sifter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Schedule_sifter.dir/schedule.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Schedule_sifter.dir/schedule.cpp.o -MF CMakeFiles/Schedule_sifter.dir/schedule.cpp.o.d -o CMakeFiles/Schedule_sifter.dir/schedule.cpp.o -c /tmp/Schedule-sifter/schedule.cpp

CMakeFiles/Schedule_sifter.dir/schedule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Schedule_sifter.dir/schedule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/Schedule-sifter/schedule.cpp > CMakeFiles/Schedule_sifter.dir/schedule.cpp.i

CMakeFiles/Schedule_sifter.dir/schedule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Schedule_sifter.dir/schedule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/Schedule-sifter/schedule.cpp -o CMakeFiles/Schedule_sifter.dir/schedule.cpp.s

CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.o: CMakeFiles/Schedule_sifter.dir/flags.make
CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.o: ../timeInterval.cpp
CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.o: CMakeFiles/Schedule_sifter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/Schedule-sifter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.o -MF CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.o.d -o CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.o -c /tmp/Schedule-sifter/timeInterval.cpp

CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/Schedule-sifter/timeInterval.cpp > CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.i

CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/Schedule-sifter/timeInterval.cpp -o CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.s

CMakeFiles/Schedule_sifter.dir/test.cpp.o: CMakeFiles/Schedule_sifter.dir/flags.make
CMakeFiles/Schedule_sifter.dir/test.cpp.o: ../test.cpp
CMakeFiles/Schedule_sifter.dir/test.cpp.o: CMakeFiles/Schedule_sifter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/Schedule-sifter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Schedule_sifter.dir/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Schedule_sifter.dir/test.cpp.o -MF CMakeFiles/Schedule_sifter.dir/test.cpp.o.d -o CMakeFiles/Schedule_sifter.dir/test.cpp.o -c /tmp/Schedule-sifter/test.cpp

CMakeFiles/Schedule_sifter.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Schedule_sifter.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/Schedule-sifter/test.cpp > CMakeFiles/Schedule_sifter.dir/test.cpp.i

CMakeFiles/Schedule_sifter.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Schedule_sifter.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/Schedule-sifter/test.cpp -o CMakeFiles/Schedule_sifter.dir/test.cpp.s

CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.o: CMakeFiles/Schedule_sifter.dir/flags.make
CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.o: ../DoublyLinkedList.cpp
CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.o: CMakeFiles/Schedule_sifter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/Schedule-sifter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.o -MF CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.o.d -o CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.o -c /tmp/Schedule-sifter/DoublyLinkedList.cpp

CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/Schedule-sifter/DoublyLinkedList.cpp > CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.i

CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/Schedule-sifter/DoublyLinkedList.cpp -o CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.s

# Object files for target Schedule_sifter
Schedule_sifter_OBJECTS = \
"CMakeFiles/Schedule_sifter.dir/main.cpp.o" \
"CMakeFiles/Schedule_sifter.dir/object.cpp.o" \
"CMakeFiles/Schedule_sifter.dir/list.cpp.o" \
"CMakeFiles/Schedule_sifter.dir/person.cpp.o" \
"CMakeFiles/Schedule_sifter.dir/comparable.cpp.o" \
"CMakeFiles/Schedule_sifter.dir/schedule.cpp.o" \
"CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.o" \
"CMakeFiles/Schedule_sifter.dir/test.cpp.o" \
"CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.o"

# External object files for target Schedule_sifter
Schedule_sifter_EXTERNAL_OBJECTS =

Schedule_sifter: CMakeFiles/Schedule_sifter.dir/main.cpp.o
Schedule_sifter: CMakeFiles/Schedule_sifter.dir/object.cpp.o
Schedule_sifter: CMakeFiles/Schedule_sifter.dir/list.cpp.o
Schedule_sifter: CMakeFiles/Schedule_sifter.dir/person.cpp.o
Schedule_sifter: CMakeFiles/Schedule_sifter.dir/comparable.cpp.o
Schedule_sifter: CMakeFiles/Schedule_sifter.dir/schedule.cpp.o
Schedule_sifter: CMakeFiles/Schedule_sifter.dir/timeInterval.cpp.o
Schedule_sifter: CMakeFiles/Schedule_sifter.dir/test.cpp.o
Schedule_sifter: CMakeFiles/Schedule_sifter.dir/DoublyLinkedList.cpp.o
Schedule_sifter: CMakeFiles/Schedule_sifter.dir/build.make
Schedule_sifter: CMakeFiles/Schedule_sifter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/Schedule-sifter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable Schedule_sifter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Schedule_sifter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Schedule_sifter.dir/build: Schedule_sifter
.PHONY : CMakeFiles/Schedule_sifter.dir/build

CMakeFiles/Schedule_sifter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Schedule_sifter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Schedule_sifter.dir/clean

CMakeFiles/Schedule_sifter.dir/depend:
	cd /tmp/Schedule-sifter/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/Schedule-sifter /tmp/Schedule-sifter /tmp/Schedule-sifter/cmake-build-debug /tmp/Schedule-sifter/cmake-build-debug /tmp/Schedule-sifter/cmake-build-debug/CMakeFiles/Schedule_sifter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Schedule_sifter.dir/depend

