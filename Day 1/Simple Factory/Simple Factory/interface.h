#pragma once
//���~����
class Bread
{
protected:
	string product_name;
public:
	void order() { 
		cout << "�I�\: " << product_name << endl; 
	}
	void bake() { 
		cout << product_name << "�M�N��..." << endl; 
	}
	void finish() { 
		cout << product_name << "�X�l!" << endl << endl; 
	}
};
