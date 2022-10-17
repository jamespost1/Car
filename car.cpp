#include <iostream>
using namespace std;

class Car  // I define a class named Car
{
  private:    // I use private visibility to establish the members of this class and to protect them from changes in other parts of the program.
      string color;
      string make;
      string model;
      string type;
  public:   // Since I am going to define constructors, I switch visibility to public.
      Car()   
      {} // Here, I explicitly define the DEFAULT CONSTRUCTOR, which takes no arguments.

      Car(string color, string make, string model, string type)
      {
        this -> color = color;
        this -> make = make;
        this -> model = model;
        this -> type = type;
      } // This is the constructor that takes in all four members as arguments.
      
        // After programming my constructor, I need to make setters and getters for each field. Here, I create getters by simply returning the member of the class:

      string getColor() const
      {
        return color;
      }

      string getMake() const
      {
        return make;
      }

      string getModel() const
      {
        return model;
      }

      string getType() const
      {
        return type;
      }

      // Next, I create setters, I use this pointers in order to clear up ambiguity with the member name and parameter:

      void setColor(string color)
      {
        this -> color = color;
      }

      void setMake(string make)
      {
        this -> make = make;
      }

      void setModel(string model)
      {
        this -> model = model;
      }

      void setType(string type)
      {
        this -> type = type;
      }
      
      // Finally, I declare this function as a friend WITHIN the class in order to overload the << ostream operator

      friend ostream& operator << (ostream& out, const Car& c);
};
// I define the function outside the class such that an object of the class can be passed as an argument
ostream& operator << (ostream& out, const Car& c)
{
  out << "Color: " << c.color << endl;
  out << "Make: " << c.make << endl;
  out << "Model: " << c.model << endl;
  out << "Type: " << c.type << endl;
  return out;
}
