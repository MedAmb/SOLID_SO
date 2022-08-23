set(VVSTR_EXEC VVSTR_Sol)

set(VVSTR_SRC VariantVisitorSetup.cpp DrawOp.cpp ${MAIN_SRC})

add_executable(${VVSTR_EXEC} ${VVSTR_SRC})

target_compile_definitions(${VVSTR_EXEC} PRIVATE VVSTOR)
target_compile_definitions(${VVSTR_EXEC} PRIVATE NOSHAPE)

target_include_directories(${VVSTR_EXEC} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_SOURCE_DIR}/Includes) 