class Super
{
};

class Sub : public Super
{
};

class Super2
{
public:
	virtual Super& res();
	virtual void param(Sub);
};

class Sub2 : public Super2
{

public:
	Sub& res()  // OK, but only reference and pointer are allowed. 
		// https://stackoverflow.com/questions/48001688/c-covariant-return-type-without-pointer
		// Explanation: polymorphism is only supported via ref/pointers. With val return type slicing happens, which is non sense.
	{
	}

	void param(Super)  // This is overload not override 
	{
	}
};

void foo(Super) {}
void bar(Super&) {}

int main()
{
	Super s = Sub();  // Slicing happens. See https://stackoverflow.com/questions/3743093/assign-derived-class-to-base-class
	foo(s);
	bar(s);
}