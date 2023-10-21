set(SOURCES main.cpp)

add_executable(race_app ${SOURCES})
target_link_libraries(race_app PUBLIC race_lib)