# Second level CMakeLists.txt: register individual tests

include(GoogleTest)

# Add tests: specify add_executable and target_link_libraries 
# test_population_dynamics_selectivity_logistic
add_executable(population_dynamics_selectivity_logistic
  test_population_dynamics_selectivity_logistic.cpp
)

target_link_libraries(population_dynamics_selectivity_logistic
  gtest_main
  fims_test
)

gtest_discover_tests(population_dynamics_selectivity_logistic)

# test_fims_math_exp.cpp
add_executable(fims_math_exp
  test_fims_math_exp.cpp
)

target_link_libraries(fims_math_exp
  gtest_main
  fims_test
)

gtest_discover_tests(fims_math_exp)

# test_fims_math_log.cpp
add_executable(fims_math_log
  test_fims_math_log.cpp
)

target_link_libraries(fims_math_log
  gtest_main
  fims_test
)

gtest_discover_tests(fims_math_log)

# test_fims_math_logistic.cpp
add_executable(fims_math_logistic
  test_fims_math_logistic.cpp
)

target_link_libraries(fims_math_logistic
  gtest_main
  fims_test
)

gtest_discover_tests(fims_math_logistic)

# benchmark_fims_math_logistic.cpp
add_executable(benchmark_fims_math_logistic
  benchmark_fims_math_logistic.cpp
)

target_link_libraries(benchmark_fims_math_logistic
  fims_test
  benchmark_main
)
