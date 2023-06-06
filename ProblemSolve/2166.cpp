#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Point
{
    double x;
    double y;
};

double calculateArea(const vector<Point> &polygon)
{
    int n = polygon.size();
    double area = 0.0;

    for (int i = 0; i < n; i++)
    {
        int j = (i + 1) % n;
        area += (polygon[i].x * polygon[j].y) - (polygon[j].x * polygon[i].y);
    }

    return area / 2;
}

int main()
{
    int n;

    cin >> n;

    vector<Point> polygon;
    for (int i = 0; i < n; i++)
    {
        Point p;
        cin >> p.x >> p.y;
        polygon.push_back(p);
    }

    double area = calculateArea(polygon);
    cout << fixed;
    cout.precision(1);
    cout << abs(area) << endl;

    return 0;
}
