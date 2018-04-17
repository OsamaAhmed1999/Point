
#include <iostream>
using namespace std;

class point
{
public:
	//CONSTRUCTORS
	point()
	{
		this->x = 0;
		this->y = 0;
	}
	point(float x, float y)
	{

		this->x = x;
		this->y = y;
	}
	point(point& clone)
	{
		this->x = clone.x;
		this->y = clone.y;
	}
  point(float x)
	{
    this->x = x;
    this->y = 0;
	}
	void display()
	{
		cout << "(" << this->x << "," << this->y << ")" << endl << endl;
	}

	//SETTERS
	void setx(float x)
	{
		this->x = x;
	}
	void sety(float y)
	{
		this->y = y;
	}
	void set(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
	//GETTTERS
	float getx()
	{
		return this->x;
	}
	float gety()
	{
		return this->y;
	}
	//ADDERS
	point add(point& object)
	{
		point result;
		result.x = this->x + object.x;
		result.y = this->y + object.y;
		return result;
	}
	point operator + (point& object)
	{
		point result;
		result.x = this->x + object.x;
		result.y = this->y + object.y;
		return result;
	}
	point operator + (float xy)
	{
		point result;
		result.x = this->x + xy;
		result.y = this->y + xy;
		return result;
	}

/*	point operator + (float xy , point& object)     //Not working
	{
		point result;
    result.x = xy + object.x;
	  result.y = xy + object.y;
	  return result;
	}*/

	//SUBTRACTOR
	point sub(point& object)
	{
		point result;
		result.x = this->x - object.x;
		result.y = this->y - object.y;
		return result;

	}
	point operator - (point& object)
	{
		point result;
		result.x = this->x - object.x;
		result.y = this->y - object.y;
		return result;
	}

	bool operator > (point& object)
	{
		if ((this->x > object.x) && (this->y > object.y))
		{
			return true;
		}
		return false;
	}

	bool operator < (point& object)
	{
		if ((this->x < object.x) && (this->y < object.y))
		{
			return true;
		}
		if ((this->x == object.x) && (this->y == object.y))
		{
			return true;
		}
		return false;
	}
	
  /*void operator = (point& object)     //Not working
	{
	  this->x = object.x;
	  this->y = object.y;
	}*/

	bool operator == (point& object)
	{
		if ((this->x == object.x) && (this->y == object.y))
		{
      return true;
    }	
		return false;
	}

	/*point operator()(float x, float y)    //Not working
	{
		point r;
		this->x = x;
		this->y = y;
		return r;
	}*/
 
	/*void operator ++ ()     //Not working
	{
		point t;
		this->x++;
		this->y++;
	}*/

private:
	float x;
	float y;

};

ostream& operator << (ostream& output, point& object)
{
	return output << "(" << object.getx() << "," << object.gety() << ")" << endl;
}