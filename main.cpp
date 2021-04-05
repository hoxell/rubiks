#include <iostream>

#include "opencv2/core.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

int main()
{
    constexpr const auto filepath = "../../resources/img/bright.jpg";
    cv::Mat img = cv::imread(filepath, cv::IMREAD_COLOR);
    if (img.empty())
    {
        std::cerr << "Could not open file: " << filepath << std::endl;
        return 1;
    }

    cv::imshow("Raw", img);
    cv::waitKey(0);
    return 0;
}