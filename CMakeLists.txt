cmake_minimum_required (VERSION 3.12)

# Define our project with the name "TowerDefence"
project (TowerDefence)

# Find SDL2
find_package(SDL2 REQUIRED)
# Add the include directories for SDL2 to our project
include_directories(${SDL2_INCLUDE_DIRS})

# Tell cmake what the main executable file for the project is, i.e. what has the main() function
add_executable(TowerDefence TowerDefence.cpp)

# Link the SDL2 library into our executable
target_link_libraries(TowerDefence ${SDL2_LIBRARIES})
