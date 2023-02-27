#include <iostream>
#include <string>

using namespace std;

class person {
 protected:
  string name = "\0";
  int age = 0;

 public:
  person(string a_name = "\0", int a_age = 0) {
    name = a_name;
    age = a_age;
  }

  string set_name(string _name) {
    name = _name;
    return name;
  }

  int set_age(int _age) {
    age = _age;
    return age;
  }

  void get_name() { cout << "name is " << name << "\n"; }

  void get_age() { cout << name << "`s age is " << age << "\n"; }

  ~person() { cout << name << " was killed(\n"; }
};

class high_person : public person {
 private:
  double high = 0;

 public:
  high_person(string a_name = "qw", int a_age = 0, double a_high = 0) {
    name = a_name;
    age = a_age;
    high = a_high;
  }

  string set_name(string _name) {
    name = _name;
    return name;
  }

  int set_age(int _age) {
    age = _age;
    return age;
  }

  double set_high(double _high) {
    high = _high;
    return high;
  }

  void get_name() { cout << "name is " << name << '\n'; }

  void get_age() { cout << name << "`s age is " << age << '\n'; }

  void get_high() { cout << name << "`s high is " << high << '\n'; }

  // ~high_person() { cout << name << " was killed)\n"; }
};

int main() {
  string nam;
  int ag;
  cout << "cin name:\n";
  cin >> nam;
  cout << "cin age:\n";
  cin >> ag;
  cout << '\n';

  person a;
  a.set_name(nam);
  a.set_age(ag);
  a.get_name();
  a.get_age();
  a.~person();
  cout << '\n';

  person b("Bob", 34);
  b.get_name();
  b.get_age();
  cout << '\n';

  high_person c;
  c.get_name();
  c.get_age();
  c.get_high();
  cout << '\n';

  return 0;
}