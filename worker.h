#pragma once
#include <iostream>
#include <string>
using namespace std;



//ְ���������
class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInfo() = 0; //���麯��
	//��ø�λ����
	virtual string getDeptName() = 0; //���麯��

	int m_Id; //ְ�����
	string m_Name; //ְ������
	int m_DeptId; //ְ�����ڲ������Ʊ��
};