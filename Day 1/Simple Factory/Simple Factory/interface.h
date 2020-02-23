#pragma once
//產品介面
class Bread
{
protected:
	string product_name;
public:
	void order() { 
		cout << "點餐: " << product_name << endl; 
	}
	void bake() { 
		cout << product_name << "烘烤中..." << endl; 
	}
	void finish() { 
		cout << product_name << "出爐!" << endl << endl; 
	}
};
