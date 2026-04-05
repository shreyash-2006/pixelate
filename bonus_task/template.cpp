#include <iostream>
#include<algorithm>
#include <opencv2/opencv.hpp>

using namespace std;

int main()
{
    // Load the image — do not change this line
    cv::Mat img = cv::imread("./assets/hogwarts.png");
    if (img.empty()) {
        cerr << "Could not load ./assets/hogwarts.png\n";
        return -1;
    }

    // TODO: decode and print the hidden message.
    
    for (int i=0; i<=img.cols();i++){
        swap(a[i],a[img.cols()-i-1]);
    }
    return 0;
}
