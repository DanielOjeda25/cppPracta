#include <iostream>
using namespace std;

// Declaracion de la clase Dog
class Dog
{
  // atributos
  string name;
  int peso;
  // constructor public co sus metodos
public:
  // constructor
  Dog();
  // setter
  void setName(const std::string &namesDog);
  void setPeso(int weight);
  virtual void print() const;
  void bark() const { std::cout << name << " Barks"; } //<-- Metodo o accion
  virtual ~Dog();                                      //<-- Destructor
};
// Asignacion de la clase
Dog::Dog()
{
  std::cout << "un perro ha sido creado"
            << "\n";
}
void Dog::setName(const std::string &namesDog)
{
  name = namesDog;
}
void Dog::setPeso(int weight)
{
  peso = weight;
}
void Dog::print() const
{
  std::cout << "El perro es " << name << " y pesa " << peso << "kg\n";
}
Dog::~Dog()
{
  std::cout << "Adios " << name << "\n";
}

// // Herencia
// class MiNoPerro : public Dog
// {
//   void setMio(const std::string &miPerro);
//   void print() const override;

// private:
//   std::string owner;
// };
// void MiNoPerro::setMio(const std::string &miPerro)
// {
//   owner = miPerro;
// };

// void MiNoPerro::print() const
// {
//   Dog::print();
//   std::cout << "El perro es de " << owner << "\n";
// }

int main(int argc, char const *argv[])
{
  Dog myDog;
  myDog.setName("PUTO PERRO");
  myDog.setPeso(10);
  myDog.print();

  return 0;
};