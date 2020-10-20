#include<iostream>


// test padding
struct D{
	char d1;
	double d2;
};

__declspec(align(2))
struct E {
	char e1;
	double e2;
};

struct F {
	double f1;
	char f2;
};

__declspec(align(2))
struct G {
	double g1;
	char g2;
};

__declspec(align(2))
struct H{
	float h1;
	char h2[3];

};

// size=24, align=8 (not 24)
struct I
{
	char i1;
	float i2;
	double i3;
	bool i4;
};

struct J{
	char j1;
	I i;  // size=24, align=8 (not 24)
	
};

struct M1
{
	float m[4][4];
};

__declspec(align(64))
struct M2
{
	float m[4][4];
};

struct V
{
	float v[4];
};

struct T1{
	M1 m;
	V v;

	
};

struct T2{
	M2 m;
	V v;

};

/*
int main(int argc, char* argv[])
{
	

	std::cout<<sizeof(D) << '\n';
	std::cout<<sizeof(E) << '\n';
	std::cout<<sizeof(F) << '\n';
	std::cout<<sizeof(G) << '\n';
	std::cout<<sizeof(H) << '\n';
	std::cout<<sizeof(I) << '\n';
	std::cout<<sizeof(J) << '\n';
	std :: cout<< '\n';
	std::cout<<sizeof(M1) << '\n';
	std::cout<<sizeof(M2)<< '\n';
	std::cout<<sizeof(V) << '\n';
	std::cout<<sizeof(T1) << '\n';
	std::cout<<sizeof(T2) << '\n';
	


	system("pause");
}
*/