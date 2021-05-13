#include <iostream>
using namespace std;

class Person{
    string name;
public:
    Person(){}
    Person(string name){this->name=name;}
    string getName(){return name;}
    void setName(string name){
        this->name = name;
    }
};

class Family{
    Person *p;
    int size;
    string name;
public:
    Family(string name, int size){
        p=new Person[size];
        this->name = name; // 성씨
        this->size = size;
    }
    void setName(int index, string fullName){
        p[index].setName(fullName);
    }
    void show(){
        cout<<name<<" Family Members : "<< size << endl;
        for(int i=0;i<size;i++){
            cout<<p[i].getName()<<'\t';
        }
    }
    ~Family(){delete [] p;}
};

int main(void){
    Family *simpson = new Family("Simpson", 3);

    simpson->setName(0, "Mr.Simpson");
    simpson->setName(1, "Mr.Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;
    return 0;
}
