#pragma once
#include<iostream>
using namespace std;
#include "worker.h"


//Ա����
class Employee:public Worker
{
public:

	//���캯��
	Employee(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void showInfo();
	
	//���ְ����λ����
	virtual string getDeptName();
};