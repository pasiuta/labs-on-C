//
// Created by dima on 17.04.18.
//

#ifndef HW2_DK_TRIANGLE_H
#define HW2_DK_TRIANGLE_H

// Point description
typedef struct tagPoint
{
    int x;
    int y;
}Point;

// Triangle description
typedef struct tagTriangle
{
    Point *A;
    Point *B;
    Point *C;
}Triangle;

// Init interface
Triangle *createTriangle(Point *A, Point *B , Point *C);
void destroyTriangle(Triangle *aTriangle);

float flatTriangle(Triangle *aTriangle);
void printTriangle(Triangle *aTriangle);
#endif //HW2_DK_TRIANGLE_H
