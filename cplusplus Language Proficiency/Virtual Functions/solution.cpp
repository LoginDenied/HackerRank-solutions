#include <string>

class Person 
{
public:
    string name;
    int age;
    
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class Professor : public Person
{
private:
    int publications;
    int cur_id;
    
public:
    static int lastId;
    
    Professor()
    {
        cur_id = lastId + 1;
        lastId++;
    }

    void getdata()
    {
        string inputName = "\0";
        cin >> inputName;
        name = inputName;
        
        int inputAge = 0;
        cin >> inputAge;
        age = inputAge; 
        
        int inputPublications = 0;
        cin >> inputPublications;
        publications = inputPublications;
    }
    
    void putdata()
    {
    cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

int Professor::lastId = 0;

class Student : public Person
{
  private: 
    int marks[6];
    int totalMarks;
    int cur_id;
    
public:
    static int lastId;

    Student()
    {
        cur_id = lastId + 1;
        lastId++;
    }
    
    void getdata()
    {
        string inputName = "\0";
        cin >> inputName;
        name = inputName;
        
        int inputAge = 0;
        cin >> inputAge;
        age = inputAge; 
        
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
        
        totalMarks = marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks[5];
        
    }
    
    void putdata()
    {
    cout << name << " " << age << " " << totalMarks << " " << cur_id << endl;
    }
};

int Student::lastId = 0;
