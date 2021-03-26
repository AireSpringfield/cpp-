#define COMMA ,
#define COMMA_FUN() ,

template<typename T, int N>
class TemplateClass
{};

#define DECLARE_INSTANCE(Type, VarName) Type VarName

int main()
{
    //DECLARE_INSTANCE(TemplateClass<int, 1>, Var0);  // fails: comma in <int, 1> is regarded as separater for args of DECLARE_INSTANCE
    //DECLARE_INSTANCE((TemplateClass<int, 1>), Var1);  // fails: "(Type) VarName" is type conversion, VarName is not declared before
    DECLARE_INSTANCE(TemplateClass<int COMMA 1>, Var2); // works
    //DECLARE_INSTANCE(TemplateClass<int COMMA_FUN() 1>, Var3); // works
}

