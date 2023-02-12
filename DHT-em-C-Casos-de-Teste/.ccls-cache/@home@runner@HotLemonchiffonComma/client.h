#include <iostream>
using namespace std;

class Client{
private :
  int         imei;
  std::string login;  
public:  
  Client();
  Client(int imei, std::string login);
  string getLogin() const;
  int getImei() const;
};