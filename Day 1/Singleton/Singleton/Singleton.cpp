#include "pch.h"
#define NULL nullptr  
#include <iostream>
using namespace std;

class Singleton {
private:
	volatile static Singleton *instance;
	Singleton() {
		cout << "建立物件..." << endl;
	}	
public:
	volatile static Singleton *getInstance() {
		if (instance == NULL) {
			instance = new Singleton();
		}
		return instance;
	}
};
volatile Singleton* Singleton::instance = NULL;

int main() {
	volatile Singleton *instance1 = Singleton::getInstance();
	volatile Singleton *instance2 = Singleton::getInstance();
	int addr1 = (int)instance1;
	int addr2 = (int)instance2;
	cout << "位址1 = " << hex << addr1 << endl;
	cout << "位址2 = " << hex << addr2 << endl;
	delete instance1;
	return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的秘訣: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
