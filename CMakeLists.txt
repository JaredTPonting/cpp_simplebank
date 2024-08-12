cmake_minimum_required(VERSION 3.10)
project(SimpleBankApp)

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 11)

# add the executable
add_executable(SimpleBankApp main.cpp BankAccount.cpp)
