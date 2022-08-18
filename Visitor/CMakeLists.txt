set(VSTR_EXEC VSTR_Sol)

set(VSTR_SRC Cercle.cpp Square.cpp VisitorSetup.cpp DrawVisitor.cpp ${MAIN_SRC})

add_executable(${VSTR_EXEC} ${VSTR_SRC})

target_compile_definitions(${VSTR_EXEC} PRIVATE VSTOR)

target_include_directories(${VSTR_EXEC} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_SOURCE_DIR}/Includes) 