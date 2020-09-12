#include <iostream>
#include <vector>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main()
{
    Mat R = Mat(3, 2, CV_8UC3);
    // fill in with random number
    randu(R, Scalar::all(0), Scalar::all(255));


    // default format
    cout << R << endl << endl;

    // Python style format
    cout << "Python = " << endl << format(R, Formatter::FMT_PYTHON) << endl << endl;

    // CSV style format
    cout << "csv = " << endl << format(R, Formatter::FMT_CSV) << endl << endl;

    // numpy style format
    cout << "numpy = " << endl << format(R, Formatter::FMT_NUMPY) << endl << endl;

    // C style format
    cout << "C = " << endl << format(R, Formatter::FMT_C) << endl << endl;

    // output with some other data structures in OpenCV
    // 2D Point
    Point2f P(5, 1);
    cout << " Point (2D) = " << P << endl << endl;

    // 3D Point
    Point3f P3f(2, 6, 7);
    cout << " Point (3D) = " << P3f << endl << endl;

    // using std::vector via cv::Mat
    vector<float> v;
    v.push_back( (float) CV_PI);
    v.push_back( 2 );
    v.push_back(3.01f);
    cout << "Vector of floats via Mat = " << Mat(v) << endl << endl;

    // using std::vector of point
    vector<Point2f> vP(20);
    for(auto i = 0; i < vP.size(); ++i) {
        vP[i] = Point2d((float) i * 5, (float)(i % 7));
    }
    cout << "A Vector of 2D Points = " << vP << endl << endl;
    return 0;
}