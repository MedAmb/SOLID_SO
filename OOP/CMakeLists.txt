set(OOP_EXEC OOP_Sol)

set(OOP_SRC Cercle.cpp Square.cpp OOPSetup.cpp ${MAIN_SRC})

add_executable(${OOP_EXEC} ${OOP_SRC})

target_include_directories(${OOP_EXEC} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_SOURCE_DIR}/Includes) 