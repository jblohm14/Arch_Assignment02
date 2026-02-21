set(SOURCES "MathLibrary.cpp")
set(HEADERS "MathLibrary.hpp")

set(TARGET MathLibrary)

add_library(${TARGET} SHARED ${SOURCES})

target_sources(${TARGET}
    PRIVATE ${SOURCES}
    PUBLIC FILE_SET HEADERS
    BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR} 
    FILES ${HEADERS}
)