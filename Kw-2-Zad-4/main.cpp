#include <iostream>
#include <cmath>

using namespace std;

class Point
{
	private:
		float x,y;
	public:
		Point(float x,float y){
			this->x=x;
			this->y=y;
		}
		Point(float x){
			this->x=x;
			y=0.0;
		}
		float getX()
		{
			return x;
		}
		float getY()
		{
			return y;
		}
		void move(Point p){
			x+=p.getX();
			y+=p.getY();
		}
};

float distance(Point p1, Point p2){
	float xP = pow((p2.getX()-p1.getX()),2.0);
	float yP = pow((p2.getY()-p1.getY()),2.0);
	return sqrt(xP + yP);
}

int main() {
	Point p1 = Point(1.0, 2.0);
	Point p2 = Point(3.5, 1.0);
	cout<<distance(p1,p2);
	return 0;
}
// W Dev-C++ program nie dzia³a dlaczego?
