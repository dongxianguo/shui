#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int ID = 0;
class User {
public:
	User(){}
	User(string account, string password) :account(account), password(password) {}
private:
	string password;
	string account;
};
class Usertabl {
public:
	bool insert(User user) {
		ID++;
		this->user[ID] = user;
		return true;
	}
	bool inTable(int id) {
		for (auto it = user.begin(); it != user.end(); it++) {
			if ((*it).first == id) {
				return true;
			}
		}
		return false;

	}
	/*void show() {²âÊÔÓÃ
		for (auto it = user.begin(); it != user.end(); it++) {
			cout << (*it).first;
		}
	}*/
private:
	map<int, User> user;

};
int main() {
	User u("zhagsan", "lisi");
	Usertabl user_table;
	user_table.insert( u);
	cout << user_table.inTable(1);
	


	return 0;
}