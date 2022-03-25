#include <iostream>
#include <stack>
#include <algorithm>
#include<string>
#include<vector>
#include <cmath>
#include <stdlib.h>

using namespace std;

int prior(string s) {
	if (s == "(" || s == ")") {
		return 0;
	}
	else if (s == "+" || s=="-") {
		return 1;
	}
	else if (s == "*" || s == "/") {
		return 2;
	}
	else if (s == "^") {
		return 3;
	}
	else {
		return -1;
	}
}


int main()
{
	stack<string> stack;
	vector<string>rec;
	string in;
	cin >> in;
	string out;
	for (int i = 0; i < size(in); ++i) {
		string symb = "";
		symb += in[i];
		if (symb == " ") {
			continue;
		}
		else if (symb == "("){
			stack.push(symb);
		}
		else if (symb == ")") {
			while (stack.top() != "(") {
				out += stack.top();
				rec.push_back(stack.top());
				stack.pop();
			}
			stack.pop();
		}
		else if (prior(symb) == -1) {
			out += symb;
			rec.push_back(symb);
		}
		else if (symb == "-" && stack.top() == "(") {
			out += symb;
			rec.push_back(symb);
		}
		else {
			while (!stack.empty() && prior(symb) <= prior(stack.top())) {
				out += stack.top();
				rec.push_back(stack.top());
				stack.pop();
			}
			stack.push(symb);
		}
	}
	while (!stack.empty())
	{
		if (stack.top() != "(") {
			out += stack.top();
			rec.push_back(stack.top());
		}
		stack.pop();
	}
	cout << out << endl;

	while (rec.size() != 1) {
		for (int i = 0; i < rec.size(); ++i) {
			string sym = "";
			string res;
			sym = rec[i];
			if (prior(sym) != -1) {
				int f = atoi(rec[i - 2].c_str());
				int s = atoi(rec[i - 1].c_str());
				auto begin = rec.begin()+(i-2);
				if (sym == "+") {
					res = to_string(f + s);
				}
				else if (sym == "-") {
					res = to_string(f - s);
				}
				else if (sym == "/") {
					res = to_string(f / s);
				}
				else if (sym == "*") {
					res = to_string(f * s);
				}
				else if (sym == "^") {
					res = to_string(pow(f, s));
				}
				if (rec.size() == 3) {
					rec.clear();
					rec.push_back(res);
				}
				else {
					rec.erase(begin, begin + 3);
					begin = rec.begin()+(i-2);
					rec.insert(begin, res);
				}
				break;
			}
			
		}
	}
	int res = atoi(rec[0].c_str());
	cout << res;
}

	

