#include <iostream>

int
main()
{
  std::string name;                                      // строка для хранения имени
  std::cout << "Enter your name: ";                      // попросить пользователя ввести имя
  std::cin >> name;                                      // получить данные
  std::cout << "Hello world from " << name << std::endl; // напечатать hello world
  return 0;                                              // конец
}
