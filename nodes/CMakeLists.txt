zephyr_library_named(nodes)
zephyr_library_sources(lib/nodes.cpp)
zephyr_include_directories(include)

target_link_libraries(nodes PRIVATE libcanard)
target_link_libraries(nodes PRIVATE cyphal_dsdl)
