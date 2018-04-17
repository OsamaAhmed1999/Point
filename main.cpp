#include <iostream>
#include "point.h"
using namespace std;

int main()
	{
		point a;
		point b;
		point *c;
		point d;

		a = (point)2.0;
		b = point(3.0, 4.0);
		c = new point(5.0, 6.0);
		a.display();
    b.display();
    //c->display();
		//cout << *c;

		//d = a + b;
		//d.display();
		//d = a + b + *c;
		//d.display();

	  /*	if (b > a)
		{
			cout << "b > a" << endl;
		}
		else
		{
			cout << "b <= a" << endl;
		}*/

		d = a + 10.0;
		//d.display();
	  //d=10.0+a;   Not Working
	  //d.display();

		a = b;
    a.display();
    b.display();
		//a = b = c;

		system("pause");
}
