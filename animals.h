#include <iostream>
using namespace std;

class Animal
{
public:

  virtual bool
  CanMilkBabies (bool printOutput = true)
  {
    if (printOutput)
      {
        cout << "\t I can't milk my babies" << endl;
      }
    return false;
  }

  virtual bool
  CanHaveVenom (bool printOutput = true)
  {
    if (printOutput)
      {
        cout << "\t I can't have venom" << endl;
      }
    return false;
  }

  virtual bool
  CanLayEggs (bool printOutput = true)
  {
    if (printOutput)
      {
        cout << "\t I can't lay eggs" << endl;
      }
    return false;
  }

  virtual bool
  CanSwim (bool printOutput = true)
  {
    if (printOutput)
      {
        cout << "\t I can't swim" << endl;
      }
    return false;
  }

};

class Mammal : public virtual Animal
{
public:

  virtual bool
  CanMilkBabies (bool printOutput = true)
  {
    if (printOutput)
      {
        cout << "\t I can milk my babies" << endl;
      }
    return true;
  }

};

class Reptile : public virtual Animal
{
public:

  virtual bool
  CanHaveVenom (bool printOutput = true)
  {
    if (printOutput)
      {
        cout << "\t I can have venom" << endl;
      }
    return true;
  }

};

class Bird : public virtual Animal
{
public:

  virtual bool
  CanLayEggs (bool printOutput = true)
  {
    if (printOutput)
      {
        cout << "\t I can lay eggs" << endl;
      }
    return true;
  }
};

class Fish : public virtual Animal
{
public:

  virtual bool
  CanSwim (bool printOutput = true)
  {
    if (printOutput)
      {
        cout << "\t I can swim" << endl;
      }
    return true;
  }
};

class Platypus : public Mammal, public Bird, public Reptile, public Fish
{
public:

  void
  Introduce (string name)
  {
    cout << "I am " << name << " I'm a platypus an animal, a mammal, a bird, a reptile, and kinda fishy." << endl;
  }

};

class Eagle : public Bird
{
public:

  void
  Introduce (string name)
  {
    cout << "I am " << name << " I'm an eagle, an animal and a bird." << endl;
  }

};