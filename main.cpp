#include <itkMesh.h>
#include <itkVector.h>

int main() {
  using Point = itk::Vector<double, 3>;
  using Traits = itk::DefaultStaticMeshTraits<Point, 3, 3, double, double, Point>;
  using Mesh = itk::Mesh<Point, 3, Traits>;

  auto mesh = Mesh::New();
}