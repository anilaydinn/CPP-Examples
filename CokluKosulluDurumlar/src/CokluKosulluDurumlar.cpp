#include <iostream>

using namespace std;

int main(){

	/*
	 	 or operatörü || ---> En az bir durum doğruysa genel sonuç true, aksi halde false
	 	 and operatörü && ---> En az bir durum yanlışsa genel sonuç false, aksi halde true
	 	 not operatörü ! ---> false işlemi true'ya , true işlemi false' a çevirir.
	 */

	string sys_username = "anil_aydin";
	string sys_password = "123456";

	string username;
	string password;

	cout << "Kullanıcı Adınızı Girin:";
	cin >> username;

	cout << "Parola";
	cin >> password;

	if(sys_username == username && sys_password == password){
		cout << "Hoşgeldiniz" << endl;
	}
	else if(sys_username != username && sys_password == password){
		cout << "Kullanıcı Adı Hatalı..." << endl;
	}
	else if(sys_username == username && sys_password != password){
		cout << "Parola Hatalı..." << endl;
	}
	else{
		cout << "Kullanıcı adı ve parola hatalı..." << endl;
	}

	return 0;
}
