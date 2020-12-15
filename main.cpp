#include <iostream>
#include <opencv2/core.hpp>
#include <itkMesh.h>
#include <itkVector.h>

int main() {
  cv::Vec3d a{1,1,1}, b{0,0,0};
  cv::Mat m;

  using Point = itk::Vector<double, 3>;
  using Traits = itk::DefaultStaticMeshTraits<Point, 3, 3, double, double, Point>;
  using Mesh = itk::Mesh<Point, 3, Traits>;

  auto mesh = Mesh::New();

  std::cout << a[0] << b[0] <<  cv::norm(a) << std::endl;
  std::cout << m.empty() << std::endl;
}