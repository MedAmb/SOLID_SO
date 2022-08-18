set(ENUM_EXEC Enum_Sol)

set(ENUM_SRC Cercle.cpp Square.cpp EnumSetup.cpp ${MAIN_SRC})

add_executable(${ENUM_EXEC} ${ENUM_SRC})

target_compile_definitions(${ENUM_EXEC} PRIVATE ENUM)

target_include_directories(${ENUM_EXEC} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_SOURCE_DIR}/Includes) 