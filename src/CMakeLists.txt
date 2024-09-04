add_library(AES STATIC aes.cpp)
target_include_directories(AES PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})