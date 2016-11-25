/// Laboratorium: Grafika Komputerowa
/// Prowadzący: Dr inż. Marek Woda
/// Cwiczenie 4
/// Zbigniew Czarnecki 209909

#include "common.h"

const float pi = 3.14159265359;

class Egg
{

private:

    /// Points in egg
    float *** matrix;

    /// Colors for all points in egg
    float *** colors;

    /// Normal vectors for all points in egg
    float *** normalVector;

    /// Generate random color for egg
    bool colorAvailable = false;

    /// IS egg render
    bool build = false;

    /// Generuje "dwu"wymiarową tablicę punktów XYZ
    void prepareMatrix();

    /// Generate array for normal vector
    void prepareNormalVector();

    float x(float u, float v);
    float y(float u, float v);
    float z(float u, float v);

    void generateNormalVector();

    float normalVectorCoordinateX();
    float normalVectorCoordinateY();
    float normalVectorCoordinateZ();

public:

    int n;
    /// 0 - draw points
    /// 1 - draw lines
    /// 2 - drwa traingles
    int renderType;

    float posX, posY, posZ;



    void transform2Egg();

    void randColors();
    void fourColors();
    void deleteSeam();

    void insertVertexWithColor(int i, int j);

    void drawPoints();
    void drawLines();
    void drawTriangles();

    void destruct();
    void draw();

};