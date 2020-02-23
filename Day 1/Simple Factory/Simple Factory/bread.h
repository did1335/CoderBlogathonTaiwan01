#pragma once
class Bagel : public Bread
{
public:
	Bagel() {
		product_name = "貝果"; 
	}
};

class FrenchBread : public Bread
{
public:
	FrenchBread() {
		product_name = "法國麵包"; 
	}
};

class Toast : public Bread
{
public:
	Toast() {
		product_name = "吐司"; 
	}
};