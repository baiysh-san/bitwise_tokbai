#include <iostream>
#include <stdio.h>
#include <opencv2/opencv.hpp>
using namespace cv;
int main(int argc) {
    Mat src;
    Mat src2;
    src = imread("/home/baiysh/ClionProjects/bitwise_tokbai/lena256.jpg");
    src2 = imread("/home/baiysh/ClionProjects/bitwise_tokbai/nature256.jpg");
    Mat res;
    if(!src.data){
        return -1;
    }
    imshow("lena", src);
    imshow("nature", src2);
    bitwise_and(src(cv::Rect(0, 0, src2.cols, src2.rows)), src2, res);
    imshow("AND", res);
    bitwise_xor(src(cv::Rect(0,0,src2.cols, src2.rows)),src2,res);
    imshow("XOR",res);
    bitwise_or(src(cv::Rect(0,0,src2.cols, src2.rows)),src2,res);
    imshow("OR",res);

    waitKey(0);
}