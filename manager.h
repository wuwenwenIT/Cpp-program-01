#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//������
class Manager :public Worker
{
public:

	//���캯��
	Manager(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void showInfo();
	
	//���ְ����λ����
	virtual string getDeptName();
};