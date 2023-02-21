#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:int age;
    string colour;

    void run() {
        cout<<"running"<<endl;
    }
};
class Dog:
public Animal
{ string petname;
void bark() {
    cout<<"barking"<<endl;
}
};
class Lion:public Animal{
    public:

    void roar(){
        cout<<"roaring"<<endl;
    }


};
int main() {
    Dog dog;
    dog.age=5;
    dog.colour="Black";
    dog.petName="Jackie";
    dog.bark();
    dog.run();
    Lion lion;
    lion.age=7;
    lion.colour="Brown";
    lion.roar();
    lion.run();
    Animal animal;
    animal.age=7;
    animal.colour="White";
    animal.run();
    return 0;
}


}
