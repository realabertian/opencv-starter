#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main()
{
    // CV_[The number of bits per item][Signed or Unsigned][Type Prefix]C[The channel number]
    // CV_8UC3 create a 8bit unsigned 3 channel data type
    // the 2, 2, is row and col number, so there 2*2 element in object M, and 
    // each element is a 8bit * 3, this default value is (0, 0, 255)
    // the Scalar is a four element short vector
    Mat M(2, 2, CV_8UC3, Scalar(0, 0, 255));
    std::cout << M << std::endl;
 
    int initArray[3] = {2, 2, 2};
    Mat L(3, initArray, CV_8UC1, Scalar::all(0));
    
    // cv::Mat::create
    M.create(4, 4, CV_8UC2);
    std::cout << M << std::endl;

    // matlab style initialize
    Mat E = Mat::eye(4, 4, CV_64F);
    std::cout << E << std::endl;

    Mat Z = Mat::zeros(3, 3, CV_8UC1);
    std::cout << Z << std::endl;

    Mat O = Mat::ones(2, 2, CV_32F);
    std::cout << O << std::endl;

    // small matrices using comma separated initializers
    Mat C = (Mat_<double> (3, 3) << 0, -1, 0,-1, 5, -1, 0, -1, 0);
    cout << C << endl;

    // create a new header, same underlying data matrix.
    Mat rowOne = C.row(1);
    // create a new header and new underlying data matrix.
    Mat copyRowOne = rowOne.clone();
    cout << rowOne << endl << endl;;
    cout << copyRowOne << endl << endl;
    
    return 0;
}
