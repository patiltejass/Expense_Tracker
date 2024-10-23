# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Login_Signup_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Login_Signup_autogen.dir\\ParseCache.txt"
  "Database\\CMakeFiles\\Database_autogen.dir\\AutogenUsed.txt"
  "Database\\CMakeFiles\\Database_autogen.dir\\ParseCache.txt"
  "Database\\Database_autogen"
  "Login_Signup_autogen"
  "Service\\CMakeFiles\\Service_autogen.dir\\AutogenUsed.txt"
  "Service\\CMakeFiles\\Service_autogen.dir\\ParseCache.txt"
  "Service\\Service_autogen"
  )
endif()
