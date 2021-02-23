#include<iostream>
#include<vector>

struct C
{
	void Method() {}
	void ConstMethod() const {}
};

int main(int argc, char* argv[])
{
	const std::vector<C> constArray(10);
	//constArray[0].Method();  // Error: type of constArray[0] is const C
	constArray[0].ConstMethod();
}