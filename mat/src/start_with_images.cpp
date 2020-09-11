#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;

int main() {
    std::cout << "Hello OpenCV" << std::endl;
    std::string image_path;
    try {
        image_path = samples::findFile("starry_night.jpg");
    }catch (Exception &e) {
        std::cout << e.what() << std::endl;
        return 1;
    } 
    if (image_path.empty()) {
        std::cout << "can't find image file!!" << std::endl;
        return 1;
    }
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty()) {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }
    imshow("Hello, OpenCV Mat", img);
    int k = waitKey(0); // Wait for a keystroke in the window

    if (k == 's') {
        std::cout << "Stop mat program!" << std::endl;
    }
    return 0;
}
