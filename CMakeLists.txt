cmake_minimum_required(VERSION 3.0)
project(tasks)

set(CMAKE_CXX_STANDARD 17)

function(add_task TASK_NAME)
    add_executable(validator_${TASK_NAME} ${TASK_NAME}/validator.cpp)
    add_executable(generator_${TASK_NAME} ${TASK_NAME}/generator.cpp)
    add_executable(checker_${TASK_NAME} ${TASK_NAME}/checker.cpp)
    add_executable(solution_${TASK_NAME} ${TASK_NAME}/solution.cpp)
endfunction()

include_directories(testlib)

add_subdirectory(constest1)
