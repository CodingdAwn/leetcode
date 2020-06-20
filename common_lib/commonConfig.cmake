add_library(common SHARED IMPORTED)
find_library(common_LIBRARY_PATH common HINTS "${CMAKE_CURRENT_LIST_DIR}/../")
set_target_properties(common PROPERTIES IMPORTED_LOCATION "${common_LIBRARY_PATH}")
