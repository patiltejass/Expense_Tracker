cmake_minimum_required(VERSION 3.16)

project(Login_Signup VERSION 0.1 LANGUAGES CXX)

# Enable automatic handling of UI, MOC, and RCC
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt packages
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

# Add subdirectories for Database and Service libraries
add_subdirectory(Database)
add_subdirectory(Service)

# Define the project sources
set(PROJECT_SOURCES
    main.cpp
    signup.cpp
    signup.h
    signup.ui



    Service/service.h
    Service/service.cpp
    Database/database.h
    Database/database.cpp
)

# Add executable depending on Qt version
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Login_Signup
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        homepage.h homepage.cpp homepage.ui
    )
else()
    add_executable(Login_Signup
        ${PROJECT_SOURCES}
        login.h login.cpp
        signup.h signup.cpp
        Service/service.h Service/service.cpp
        Database/database.h Database/database.cpp
    )
endif()

# Link the necessary Qt libraries
target_link_libraries(Login_Signup PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Sql
    Service
    Database
)

# Define properties for macOS bundle or iOS if needed
if(${QT_VERSION} VERSION_LESS 6.1.0)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Login_Signup)
endif()

set_target_properties(Login_Signup PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Installation paths for the executable
include(GNUInstallDirs)
install(TARGETS Login_Signup
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finalize the executable for Qt 6
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Login_Signup)
endif()
