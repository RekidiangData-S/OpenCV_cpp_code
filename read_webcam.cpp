#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Webcam  //////////////////////



int main() {

    //string path = "Resources/test_video.mp4";
    VideoCapture cap(0);
    Mat img;
    while (true) {

        cap.read(img);
        imshow("Image", img);
        waitKey(20);
    }
}