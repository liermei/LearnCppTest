#include "test_base.h"

#include <iostream>
using namespace std;
const float PI=3.2415926; //give pai
const float FENCE_PRICE=35; //give fence'price
const float CONCRTE_PRICE=20; //concrte'price

class Circle
{//
public ://外部接口
	Circle(float r);		//构造函数
	float circumference ();//计算圆的的周长
	float area ();//计算圆的面积

private :
	float radius ;//圆半径
};

//类的构造
//构造函数初始化成员

Circle::Circle (float r)
{

	radius =r;
}//计算圆的周长
float Circle ::area(){
	return 2*PI* radius;
}
//计算圆的面积
float Circle ::circumference(){
	return PI *radius* radius;

}

float FloatAbs(float f)
{
	if (f < 0) return -f;
	return f;
}

TEST(SimpleArea, FloatAbs)
{
	EXPECT_TRUE(FloatAbs(-1) > 0);
}

TEST(SimpleArea, CaclArea)
{
	Circle c(1.0);
	EXPECT_TRUE(FloatAbs(c.area()-3.141592) < 0.01);
}

TEST(SimpleArea, Test1)
{
#if 0
	float radious;
	Circle pool(radious);
	Circle poolrim(radious+3);
	float fenceCost =poolrim.circumference()*FENCE_PRICE ;
	cout<<"Fencing cost is$" <<fenceCost<< endl;
	float  concreteCost =(poolrim.area()-pool.area())* CONCRTE_PRICE;
	return 0;
#endif
}