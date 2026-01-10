add_executable(test)

target_sources(test
  PRIVATE
    single_linked_list.cpp
)

target_link_libraries(test
  PRIVATE
    common
)

