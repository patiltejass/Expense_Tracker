add_library(Database STATIC
    database.cpp
    database.h
)

# Find Qt packages
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

target_include_directories(Database PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(Database PRIVATE
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Sql
)
