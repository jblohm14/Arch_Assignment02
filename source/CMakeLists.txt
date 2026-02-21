set(TARGET MainApp)
set(SOURCES "main.cpp")

# create a binary executable composed of SOURCES
add_executable(${TARGET} ${SOURCES})

# add application specific libraries to LIBS
target_link_libraries(${TARGET} PUBLIC MathLibrary)
