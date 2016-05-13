//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

static Complex Complex::operator +(const Complex &p,const Complex &q){
    Complex temp;
    temp.a = (p.a)+(q.a);
    temp.b = (p.b)+(q.b);
    return temp;
}

static Complex Complex::operator <<(const Complex &p){
    cout<<p.a<<"+i"<<p.b;
}
