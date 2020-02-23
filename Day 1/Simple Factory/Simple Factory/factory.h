#pragma once
Bread *BreadFactory(string name)
{
	Bread *bread = NULL;
	if (name == "Bagel") {
		bread = new Bagel();
	}
	else if (name == "French Bread") {
		bread = new FrenchBread();
	}
	else if (name == "Toast") {
		bread = new Toast();
	}
	else {
		bread = NULL;
	}
	while (bread!=NULL)
	{
		bread->order();
		bread->bake();
		bread->finish();
		return bread;
	}	
}