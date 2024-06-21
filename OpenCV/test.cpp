#include "opencv2/opencv.hpp" 
#include "iostream" 
 
int main(int argc, char const *argv[]) 
{ 
    cv::Mat img = cv::imread("test.jpg"); 
    if (img.empty()) 
        std::cout << "image is empty or the path is invalid!" << std::endl; 
    cv::imshow("Origin", img); 
    cv::waitKey(0); 
    cv::destroyAllWindows(); 
    return 0; 
} 

// shift+ctrl+P   -->   C++ config
// Shift+ctrl+B   -->   只編譯出exe檔