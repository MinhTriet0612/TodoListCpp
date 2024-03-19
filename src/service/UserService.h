//
// Created by minhtriet on 19/03/2024.
//

#ifndef UNTITLED_USERSERVICE_H
#define UNTITLED_USERSERVICE_H

#include "../model/User.h"
#include "../repository/UserRepository.h"
class UserService {
private:
    UserRepository userRepository = UserRepository();
public:
    UserService();
    void AddUser(User user);
    void RemoveUser(User user);
    void UpdateUser(User user);
    User* GetUserById(int id);
    std::vector<User*> GetAllUsers();
    bool IsUserExist(User user);
    bool IsUserExist(std::string username);
    UserRepository getUserRepository();
};


#endif //UNTITLED_USERSERVICE_H