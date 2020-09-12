#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

// Goal
// How to go through each and every pixel of an image?
// How are OpenCV matrix values stored?
// How to measure the performance of out algorithm?
// What are lookup tables and why use them?
int main()
{
    // getTickCount();
    // getTickFrequency();
    
    int a = 1, *b = &a;
    cout << a << endl;
    cout << b << endl;
    cout << *b++ << endl;
    cout << b << endl;
    cout << *b << endl;
    return 0;
}