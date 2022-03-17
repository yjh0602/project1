#include"Hero.h"
#include"Monster.h"


//������� ������ �ý��� ����
void Hero::Attack(Monster* monster,Hero* hero)
{	
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(minDamage, hero->maxDamage);
	hero->_randomDamege = dis(gen);
	monster->hp= monster->hp - hero->_randomDamege;
}
//������� ���� ����
void Hero::HeroInfo()
{
	cout << "-----------------------" << endl;
	cout << "  �̸� : " << this->name << endl;
	cout << "  ü�� : " << this->hp << endl;
	cout << "  ���ݷ� : " <<this->minDamage << " ~ " << this->maxDamage << endl;
	cout << "  ������ : " << this->money << endl;
	cout << "-----------------------" << endl;

}
