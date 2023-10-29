set(SOURCES
        race.cpp
        air_race.cpp
        ground_race.cpp
        combined_race.cpp
        eagle.cpp
        broom.cpp
        teppich_jet.cpp
        ground_vehicle.cpp
        offroad_shoes.cpp
        camel.cpp
        kentavr.cpp
        vehicle.cpp
        super_camel.cpp
)

set(HEADERS
        vehicle.h
        air_vehicle.h
        eagle.h
        broom.h
        teppich_jet.h
        ground_vehicle.h
        offroad_shoes.h
        camel.h
        kentavr.h
        super_camel.h
        race.h
        air_race.h
        ground_race.h
        combined_race.h
        air_vehicle.cpp
)

add_library(race_lib SHARED ${SOURCES} ${HEADERS})
target_include_directories(race_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})