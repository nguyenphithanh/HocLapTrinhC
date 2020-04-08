#include<math.h>
typedef struct  Point
{
    float x;
    float y;
};
typedef struct Edge{
    Point A,B;
};
typedef struct Triangle{
    Point A,B,C;
};
typedef struct Square{
    Point A,B,C,D ;
};
typedef struct Rectangle{
    Point A,B,C,D;
};
typedef struct  circle{
    float r;
    Point O;
};
float lengthEdge(Point A, Point B){
    return sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));
}
float lengthEdge(Edge edge){
    return lengthEdge(edge.A,edge.B);
}
int isTriangle(Triangle triangle){
    float AB = lengthEdge(triangle.A, triangle.B);
    float AC = lengthEdge(triangle.A,triangle.C);
    float BC = lengthEdge(triangle.B, triangle.C);
    return AB+BC<=AC || AC+BC<= AB || AB+AC<= BC;
}
int isIsoscelesTriangle(Triangle triangle){
    int flag = 1;
    float AB = lengthEdge(triangle.A, triangle.B);
    float AC = lengthEdge(triangle.A,triangle.C);
    float BC = lengthEdge(triangle.B, triangle.C);
    // kiem tra la tam giac
    if(!isTriangle(triangle)){
        flag = 0;
    }
    else
    {
        if(AB!=AC && AB!=BC && AC!=BC){
            flag = 0;
        }
    }
    return flag;
    
}
int main(){
    return 0;
}