﻿set(IM_HEADERS
        ByteBuf.h
        QIM.h
        proto/im.pb.h
        database/IMDataBase.h
        database/Message.h
        database/export.h
        database/precompiled.h
        database/Session.h
        database/User.h
        Convert.h
        HttpClient.h
        )

set(IM_SRS
        ByteBuf.cpp
        QIM.cpp
        proto/im.pb.cc
        database/IMDataBase.cpp
        database/Message.cpp
        database/Session.cpp
        database/User.cpp
        Convert.cpp
        HttpClient.cpp
        )

add_library(IM STATIC ${IM_SRS})

target_compile_definitions(IM PRIVATE -D_BUILDING_QX_BLOG)

install(TARGETS IM LIBRARY DESTINATION lib)
install(FILES ${IM_HEADERS} DESTINATION include/${CMAKE_PROJECT_NAME}/im)

target_link_libraries(IM
        Qt${QT_VERSION_MAJOR}::Core
        Qt${QT_VERSION_MAJOR}::Gui
        Qt${QT_VERSION_MAJOR}::WebSockets
        Qt${QT_VERSION_MAJOR}::Concurrent
        Qt${QT_VERSION_MAJOR}::Sql
        )

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_link_libraries(${CMAKE_PROJECT_NAME}
            ${THIRD_DIR_PATH}/protobuf/lib/win64/debug/libprotobufd.lib
            ${THIRD_DIR_PATH}/orm/lib/win64/debug/QxOrmd.lib
            )
endif ()

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    target_link_libraries(${CMAKE_PROJECT_NAME}
            ${THIRD_DIR_PATH}/protobuf/lib/win64/release/libprotobuf.lib
            ${THIRD_DIR_PATH}/orm/lib/win64/release/QxOrm.lib
            )
endif ()

target_include_directories(
        IM SYSTEM PUBLIC
        ${THIRD_DIR_PATH}/protobuf/include
        ${THIRD_DIR_PATH}/orm/include
)
