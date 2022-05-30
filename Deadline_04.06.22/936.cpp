#include <vector>
#include<algorithm>
#include<iostream>
#include <cmath>
#include<fstream>

using namespace std;

struct Point {
	int x;
	int y;
};

int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	int mX, mY, n;
	double r;
	vector<Point>p;
	cin >> mX >> mY >> r >> n;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		x -= mX;
		y -= mY;
		if (sqrt(x * x + y * y) <= r) {
			p.push_back(Point{ x,y });
		}
	}
	int ans = 0;
	for (Point p1 : p) {
		int on = 0, left = 0, right = 0;
		for (Point p2 : p) {
			int cp = p1.x * p2.y - p2.x * p1.y;
			if (cp < 0) {
				++left;
			}
			else if (cp > 0) {
				++right;
			}
			else {
				on++;
			}
		}
		if (ans > on + left) {
			ans = max(ans, (on + right));
		}
		else {
			ans = max((on + left), (on + right));
		}
	}
	cout << ans << endl;
}
