cmake_minimum_required (VERSION 2.6)

project (Questionnaire)

add_executable (test_atoi test_atoi.c atoi.c)
target_link_libraries(test_atoi m)

add_executable (test_strlen test_strlen.c strlen.c)