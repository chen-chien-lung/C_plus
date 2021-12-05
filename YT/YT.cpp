#include<iostream>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
private:
    
    string Company;
    int Age;
protected:
    string Name;
public:
 
    void setName(string name){
        Name = name;
    }

    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }

    string getCompany(){
        return Company;
    }

    void setAge(int age){
        Age = age;
    }

    int getAge(){
        return Age;
    }

    void IntroducceYourself(){
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion(){
        if (Age>30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " Sorry~~" << endl;
    }

    virtual void Work(){
        cout << Name << " is going on a diet!" << endl;
    }

};

class Developer : public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage):Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBugs(){
        cout << getName() << " fix bug using " << FavProgrammingLanguage << endl;
        cout << Name << " fix bug using " << FavProgrammingLanguage << endl;
    }
    void Work(){
        cout << Name << " is coding" << endl;
    }
};

class Teacher : public Employee {
public:
    string Subject;
    Teacher(string name, string company, int age, string subject):Employee(name, company, age){
        Subject = subject;
    }
    void PrepareLesson(){
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
    void Work(){
        cout << Name << " is teaching" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employee employee = Employee("Mike", "Amazon", 25);
    employee.IntroducceYourself();

    employee.setAge(15);
    cout <<  employee.getAge() << endl;

    employee.AskForPromotion();

    Developer d = Developer("Jack", "ASML", 30, "C++");
    d.fixBugs();
    d.AskForPromotion();

    Teacher t = Teacher("Andy", "Apple", 40, "Math");
    t.PrepareLesson();

    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();

    return 0;
}
