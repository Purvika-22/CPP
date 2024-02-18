#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
    protected:
        int age;
    public:
        Animal();
        Animal(int a);
        virtual void makesound();
        void accept();
        void display();

        virtual ~Animal();

        int getAge() const { return age; }
        void setAge(int age_) { age = age_; }   
};

#endif // ANIMAL_H