#include <bits/stdc++.h>
using namespace std;

struct Point {
    float x, y;

    Point(float _x, float _y){
        x = _x;
        y = _y;
    }
};

// nViết một hàm print() nhận tham số là một biến kiểu Point và in ra tọa độ điểm đó dưới dạng (x, y).

Point middle(Point one, Point two)
{
    Point res(0, 0);
    res.x = (one.x + two.x) / 2;
    res.y = (one.y + two.y) / 2;
    return res;
}

void print(const Point &p){
    cout << p.x << " " << p.y << endl;
}

//Demo sử dụng hàm đó tại hàm main.

int main()
{
   Point point1(10, 12);

   Point point2(9, 13);

    Point mid = middle(point1, point2);
    print(mid);
}


