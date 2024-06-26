﻿#pragma once
#include <string>
#include "../sources/sha1.h"
using namespace std;

class User
{
	static int userCounter;
	int _id;
	string _login;
	string _username;
	Hash _passwordHash;
public:
	User();
    string getUserName()const;
	User(string username, Hash passHash);
	int checklogin(const string& login, const Hash& passHash) const;
    string& getuserName();
	int getUserID() const;
};
