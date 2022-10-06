#include <iostream>

struct Vector3f
{
	float x, y, z;
};

struct FloatVector3f
{
	float f;
	Vector3f vec;
};

struct BoolVector3f
{
	bool b;
	Vector3f vec;
};

struct Vector3fBool
{
	Vector3f vec;
	bool b;
};

//int main()
//{
//	std::cout << sizeof(Vector3f) << ' ' << alignof(Vector3f) << '\n';
//	std::cout << sizeof(FloatVector3f) << ' ' << alignof(FloatVector3f) << '\n';
//	std::cout << sizeof(BoolVector3f) << ' ' << alignof(BoolVector3f) << '\n';
//	std::cout << sizeof(Vector3fBool) << ' ' << alignof(Vector3fBool) << '\n';
//	std::cout << sizeof(bool);
//
//	system("pause");
//}
