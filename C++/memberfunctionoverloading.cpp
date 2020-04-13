#include<iostream>

using namespace std;

class Cat
{
	public:
	string name;
};

class Dog
{
	public:
	string name;
};

class Human
{
	public:
	string name;
};

class Door
{
	private:
	int Howmanyinside;
	public:
	void Start();
	void Gothrough(Cat *acat);
	void Gothrough(Dog *adog);
	void Gothrough(Human *ahuman);
};

void Door::Start()
{
	Howmanyinside=0;
}
void Door::Gothrough(Cat *somebody)
{
	cout<< "Welcome, " << somebody->name <<endl;
	cout<< "A cat just entered!" <<endl;
	Howmanyinside++;
}
void Door::Gothrough(Dog *somebody)
{
	cout<< "Welcome, " << somebody->name <<endl;
	cout<< "A dog just entered!" <<endl;
	Howmanyinside++;
}
void Door::Gothrough(Human *somebody)
{
	cout<< "Welcome, " << somebody->name <<endl;
	cout<< "A human just entered!" <<endl;
	Howmanyinside++;
}

int main(int argc, char *argv[])
{
	Door entrance;
	entrance.Start();
	Cat *SneekyGirl= new Cat;
	SneekyGirl->name="Sneeky Girl";
	Dog *LittleGeorge=new Dog;
	LittleGeorge->name="Little George";
	Human *me=new Human;
	me->name="Saarthak";
	entrance.Gothrough(SneekyGirl);
	entrance.Gothrough(LittleGeorge);
	entrance.Gothrough(me);
	delete SneekyGirl;
	delete LittleGeorge;
	delete me;
	return 0;
}
