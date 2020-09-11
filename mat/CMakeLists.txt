add_executable(start_with_images src/start_with_images.cpp)

target_include_directories(start_with_images
    PRIVATE ${OpenCV_INCLUDE_DIRS}
    )
target_link_libraries(start_with_images ${OpenCV_LIBS})

add_executable(basic_image_container src/basic_image_container.cpp)
target_include_directories(basic_image_container PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(basic_image_container ${OpenCV_LIBS})