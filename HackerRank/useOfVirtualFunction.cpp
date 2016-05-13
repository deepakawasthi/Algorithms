class Person{
    public:
        char *name;
        int age;
        int id;
        virtual void getdata();
        virtual void putdata();
};

class Student:public Person{
    public:
        int *marks;
        int sum_of_marks;
        void getdata(){
            cin>>name>>age>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4]>>marks[5]>>id;

            sum_of_marks = 0;
            //for(int j=0;j<6;j++)
              //  sum_of_marks +=marks[j] ;
        }
        void putdata(){
            cout<<name<<" "<<age<<" "<<sum_of_marks<<endl;
        }
};

class Professor:public Person{
    public:
        int publications;
        void getdata(){
            cin>>name>>age>>publications>>id;
        }
        void putdata(){
            cout<<name<<" "<<age<<" "<<publications<<endl;
        }
};
