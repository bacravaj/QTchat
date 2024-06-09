#pragma once
#include <vector>
#include "../sources/User.h"
#include "../sources/Message.h"
#include <string>
#include <unordered_map>

class Database
{
	vector<User> _users;
	vector<Message> _messages;
	unordered_map<string, int> _usersMapByName;
public:
    int searchUserByName(string);
    vector<string> getUserList() const;
    string getUserName(const int&) const;
	Database();
	int addUser(string username, string password);
    void dellUser(string username);
	int checkPassword(string username, string password);
	void addChatMessage(string sender, string);
	bool addPrivateMessage(string sender, string target, string message);
	vector<string> getChatMessages();//показать все сообщения
    vector<Message> getPrivateMessage(int userID = -1);//показать личные сообщения пользователю username
};
