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
    for (int j=0;i<=ing,rows();j++){
        if (j%2==0){
            for (int i=0; i<=img.cols();i++){
        swap(img[i],a[img.cols()-i-1]);
    }
        }
        else{
            for (int k=img.cols(); k>=0();k--){
        swap(a[img.cols()-k-1],img[k]);
        }
    }
    
    return 0;
}
