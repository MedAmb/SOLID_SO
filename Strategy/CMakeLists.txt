set(STG_EXEC STG_Sol)

set(STG_SRC StrategySetup.cpp DrawStrategy.cpp ${MAIN_SRC})

add_executable(${STG_EXEC} ${STG_SRC})

target_compile_definitions(${STG_EXEC} PRIVATE STG)

target_include_directories(${STG_EXEC} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_SOURCE_DIR}/Includes) 