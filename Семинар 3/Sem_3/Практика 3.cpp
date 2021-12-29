
#include <iostream>
using namespace std;

int main()
{   
	//задача 1
	int a = 10;
	while (a < 21) {
		cout « a*a « endl;
		a++;
	}

	//задача 2
    	int s = 0;
    	int i = 0;
    	int n = 0;
    	cin >> n;
    	while (i<=n) {
      	  s += i;
     	   i++;
   	 }
  	  cout << s << endl;
	
	//задача 3
	int a;
	cin » a;
	int mul = 1;
	while (a > 0) {
		mul *= a;
		a--;
	}
	cout « mul « endl;

    	//задача 4
   	 int n = 0;
   	 cin >> n;
  	 int a = 0;
  	 int pos = 0;
 	 int neg = 0;
 	 int zer = 0;
 	   for (int i = 0; i < n; i++) {
  	      cin >> a;
  	      if (a > 0) {
    	        pos++;
    	    }
    	    if (a < 0) {
   	         neg++;
  	      }
    	    if (a == 0) {
    	        zer++;
   	     }
  	  }
 	   cout << "pos " << pos << " neg " << neg << " zero " << zer << endl;
	}
