# CMakeList.txt: проект CMake для Task32_2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Task32_2 "Task32_2.cpp")

target_link_libraries(Task32_2 PRIVATE nlohmann_json::nlohmann_json)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Task32_2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
