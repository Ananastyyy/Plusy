#include <iostream>
#include<algorithm>
#include<fstream>
#include<vector>

using namespace std;

struct Road {
	int d;
	int l;
	int h;
};

int main()
{
	ifstream in;
	ofstream out;
	in.open("INPUT.TXT");
	out.open("OUTPUT.TXT");
	float n, m;
	vector<Road> path;
	vector<pair<float, float> > res;
	in >> n >> m;
	for (int i = 0; i < n; ++i) {
		Road a;
		in >> a.d >> a.l >> a.h;
		path.push_back(a);
	}
	float speed = m;
	float time = 0;
	int p = -1;
	do {
		for (int j = 0; j < n; ++j) {
			if (speed > path[j].l) {
				time += path[j].d / speed + path[j].h;
			}
			else {
				time += path[j].d / speed;
			}
		}
		res.push_back(make_pair(time, speed));
		p++;
		time = 0;
		if (p < path.size()) {
			speed = path[p].l;
		}
		else {
			break;
		}
	} while (true);
	sort(res.begin(), res.end());
	vector<int>sp;
	float mint = res[0].first;
	for (int i = 0; i < n; ++i) {
		if (res[i].first == mint) {
			sp.push_back(res[i].second);
		}
		else {
			break;
		}
	}
	sort(sp.begin(), sp.end());
	out << sp[sp.size()-1] << endl;
}