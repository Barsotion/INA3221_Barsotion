# (E) Barsotion KOy 2018-2026

project(barsotion-ina3221)

set(SOURCES
    src/ina3221_barsotion.c
)

add_library(${PROJECT_NAME} STATIC ${SOURCES})

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
        $<INSTALL_INTERFACE:inc>
)
