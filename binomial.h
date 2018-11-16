#ifndef Binomial_H
#define Binomial_H
#include "nodoB.h"
#include "fstream"

template<class T>
class binomial{
public:
	std::list<nodob<T>*> root;
public:
	binomial(){};
	void insert(T d);
	auto _union(nodob<T>* &,nodob<T>* &);
	auto getmin();
	auto deletemin();
	void merge(std::list<nodob<T>*> &list1);
	bool find(T d,nodob<T> **&p);
	void print();
	void print(std::list<nodob<T>*> p,int c,std::ofstream& a);

};
#endif
