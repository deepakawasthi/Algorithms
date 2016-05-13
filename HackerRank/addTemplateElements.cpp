/*Write the class AddElements here*/
template <class T>
class AddElements{
    T elements;
    public:
        T add(T b);
        T concatenate(T c);
        T operator +(T d);
};
template <class T>
T AddElements<T>::add(T b){
            T temp;
            temp.elements = (this->elements)+(b.elements);
            return temp;
        }
T AddElements<T>::concatenate( T c){
            T temp1;
            temp1 = (this->elements)+(c.elements);
            return temp1;
        }
T AddElements<T>::operator +( T d){
            T temp2;
            temp2 = (this->elements)+(d.elements);
            return temp2;
        }
