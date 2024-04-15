#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

// nViết một hàm print() nhận tham số là một biến kiểu Point và in ra tọa độ điểm đó dưới dạng (x, y).

void demo1(Point p) {
    p.x += 1;
}

void demo2(Point &p){
    p.x += 1;
}

void print(const Point &p){
    cout << p.x << " " << p.y << endl;
}

//Demo sử dụng hàm đó tại hàm main.

int main()
{
   Point point;
   point.x = 10;
   point.y = 12;

    demo1(point);
    print(point);

    demo2(point);
    print(point);
}


