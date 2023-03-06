#include <iostream>
#include <string>

using namespace std;

class person {
protected:
  string L_name;

private:
  string name = "\0";
  int age = 0;

public:
  person(string Lname = "\0", string name = "\0", int age = 0) {
    L_name = Lname;
    this->name = name;
    this->age = age;
  }

  string set_Lname(string Lname = "\0") {
    L_name = Lname;
    return L_name;
  }

  string set_name(string _name) {
    name = _name;
    return name;
  }

  int set_age(int _age) {
    age = _age;
    return age;
  }

  void get_name() { cout << name << "\t"; }

  void get_age() { cout << age << "\t"; }

  void get_Lname() { cout << L_name << '\t'; }

  // ~person() { cout << name << " was killed(\n"; }
};

class children : public person {
private:
  string name;
  int age;
  // string L_name = person::L_name;
public:

  children(string F_name = "\0", int age = 0) {
    // children::L_name = person::L_name; 
    this->name = F_name;
    this->age = age;
  }

  string set_Fname(string Fname) {
    name = Fname;
    return name;
  }

  // string set_Lname(){
  //   children::L_name = person::L_name;
  //   return children::L_name;
  // }

  int set_age(int age) {
    children::age = age;
    return children::age;
  }

  void get_Fname() { cout << name << '\t'; }

  // void get_Lname() { cout << L_name << '\t'; }

  void get_age() { cout << age << '\t'; }
};

int main() {
  person a("ar", "te", 18);
  a.set_name("artem");
  a.set_Lname("garipov");
  a.set_age(19);
  a.get_name();
  a.get_Lname();
  a.get_age();

  cout << '\n';

  children b("ni", 80);
  b.set_Fname("nikita");
  b.set_age(8);
  b.set_Lname("garipov");
  b.get_Fname();
  b.get_Lname();
  b.get_age();
  cout << '\n';

  return 0;
}

// class high_person : public person {
//  private:
//   double high = 0;

//  public:
//   high_person(string a_name = "qw", int a_age = 0, double a_high = 0) {
//     name = a_name;
//     age = a_age;
//     high = a_high;
//   }

//   string set_name(string _name) {
//     name = _name;
//     return name;
//   }

//   int set_age(int _age) {
//     age = _age;
//     return age;
//   }

//   double set_high(double _high) {
//     high = _high;
//     return high;
//   }

//   void get_name() { cout << "name is " << name << '\n'; }

//   void get_age() { cout << name << "`s age is " << age << '\n'; }

//   void get_high() { cout << name << "`s high is " << high << '\n'; }

//   // ~high_person() { cout << name << " was killed)\n"; }
// };