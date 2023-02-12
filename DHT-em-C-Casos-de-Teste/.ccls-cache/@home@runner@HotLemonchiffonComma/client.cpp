#include "client.h"

Client::Client(){
  this->imei   = -1;
  this->login = "";
};  
Client::Client(int imei, std::string login){
  this->imei    = imei;
  this->login  = login;
}
string Client::getLogin() const {
  return login;
}
int Client::getImei() const{
  return imei;
}