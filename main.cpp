#include <iostream>
#include <opencv2/core.hpp>

int main() {
  cv::Vec3d a{1,1,1}, b{0,0,0};
  cv::Mat m;

  std::cout << a[0] << b[0] <<  cv::norm(a) << std::endl;
  std::cout << m.empty() << std::endl;
}