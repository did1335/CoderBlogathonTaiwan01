#pragma once
class Bagel : public Bread
{
public:
	Bagel() {
		product_name = "���G"; 
	}
};

class FrenchBread : public Bread
{
public:
	FrenchBread() {
		product_name = "�k���ѥ]"; 
	}
};

class Toast : public Bread
{
public:
	Toast() {
		product_name = "�R�q"; 
	}
};