add_library(theodora_cpp STATIC Theodora.cpp tensor.cpp)

target_include_directories(
    theodora_cpp
    PUBLIC "${PROJECT_SOURCE_DIR}/include"
)

target_compile_features(theodora_cpp PUBLIC cxx_std_17)

set_target_properties(
    theodora_cpp
    PROPERTIES POSITION_INDEPENDENT_CODE ON
)
