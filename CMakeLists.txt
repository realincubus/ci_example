

add_executable( my_test cool_feature.cpp test_cool_feature.cpp ) 


enable_testing()

add_test ( COOL_FEATURE_TEST my_test )
