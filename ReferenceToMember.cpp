#include "Common.h"

struct C
{
	int i;

	int& GetRefToMember(){
		return i;
	}

	int GetMemberValue() {
		return i;
	}

	void PrintMemberAddress()
	{
		std::cout<< "Address of the member is: " << &i << '\n';
	}
};

int main(int argc, char* argv[])
{
	C c;
	c.PrintMemberAddress();

	std::cout<< "Address of the returned reference is: " << &c.GetRefToMember() << '\n';
	// std::cout<< "Address of the returned value is: " << &c.GetMemberValue() << '\n';  // Compile error: returned value is not a lvalue.
	
	int& Ref = c.GetRefToMember();
	std::cout<< "Address of the reference of the returned reference is: " << &Ref << '\n';
	
	int Val = c.GetRefToMember();
	std::cout<< "Address of the copied value of the returned reference is: " << &Val << '\n';

	system("pause");
}	
