template<int TemplateVar>
void Foo()
{
	const int ConstVar = 0;
	static_assert(ConstVar == 0, "");
	static_assert(TemplateVar == 0, "");

}
