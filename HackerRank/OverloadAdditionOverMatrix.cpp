
class Matrix{
  public:
    vector<int> a;

    Matrix operator +(Matrix &q){
        vector<int>::iterator it1 = (this->a).begin();
        vector<int>::iterator it2= (q.a).begin();
        Matrix temp;
        while(it2 != (q.a).end()){
            temp.a.push_back((const) (*it1)+(*it2) );
            it2++;
        }
        return temp;
    }
};
