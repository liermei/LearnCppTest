#include "test_base.h"

#include <iostream>
using namespace std;
const float PI=3.2415926; //give pai
const float FENCE_PRICE=35; //give fence'price
const float CONCRTE_PRICE=20; //concrte'price

class Circle
{//
public ://�ⲿ�ӿ�
	Circle(float r);		//���캯��
	float circumference ();//����Բ�ĵ��ܳ�
	float area ();//����Բ�����

private :
	float radius ;//Բ�뾶
};

//��Ĺ���
//���캯����ʼ����Ա

Circle::Circle (float r)
{

	radius =r;
}//����Բ���ܳ�
float Circle ::area(){
	return 2*PI* radius;
}
//����Բ�����
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