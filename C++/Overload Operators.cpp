//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

Complex operator+(Complex val1, Complex val2)
{
    return Complex{ val1.a + val2.a, val1.b + val2.b };
}

std::ostream& operator<<(std::ostream& os, const Complex val)
{
    os << val.a << "+" << "i" << val.b << "\n";
    return os;
}


