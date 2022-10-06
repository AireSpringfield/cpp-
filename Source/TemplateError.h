#pragma once
template<typename T> class C
{
public:
	int foo(T p) { return p->bar(); }
};
