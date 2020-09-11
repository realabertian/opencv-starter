
#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;

int main() {
    // Mat just a matrix with auto memory management
    // Mat object has two part in its data
    // - matrix header containing information such as the size of matrix, the method used for storing data
    // - a poniter to the underlying matrix data which containing the pixel values
    Mat A, C; // this just create header
    A = imread(samples::findFile("starry_night.jpg"), IMREAD_COLOR); //
    
    Mat B(A); // Use Mat's copy constructor, but only copy the header value and the pointer value
    C = A; // Assignment operator, same as copy constructor, only copy pointer and header
    // see its size
    std::cout << "The Mat A's size is: " << A.size << std::endl;
    // All the above objects, in the end, point to the same single data matrix and making a modification using any of them will affect
    // all the ones as well. in practice the different objects just provide different access methods to the same underlying data;
    // nevertheless, their header parts are different. The real interesting part is that you can create headers which refer to only
    // a subsection of subsection of the full data. For example, to create a region of interest (ROI), in an image you just create a
    // new header with the new boundaries:
    
    // using Mat constructor
    Mat D(A, Rect(10, 10, 100, 100));
    Mat E = A(Range::all(), Range(1,3)); // using row and column boundaries
    
    // D and E's size has changed, but they pointer same undlerlying data
    std::cout << "D size: " << D.size << std::endl;
    std::cout << "E size: " << E.size << std::endl;
    
//    imshow("D", D);
    imshow("E", E);
    int k = waitKey(0);
    
    return 0;
}
