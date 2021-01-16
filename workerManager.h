#pragma once //��ֹͷ�ļ��ظ�����
#include <iostream> //�������������ͷ�ļ�
using namespace std; //ʹ�ñ�׼�����ռ�
#include"worker.h"

#include <fstream>
#define FILENAME "empFile.txt" //�곣��������ͷ�ļ� fstream

class WorkerManager
{
public:

	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void ExitSystem();

	//��¼�ļ��е���������
	int m_EmpNum;

	//Ա�������ָ��
	Worker ** m_EmpArray;//ָ��������ٵ�����
						 //���������ݻ����ų���Ľ������ͷ�
	//���Ա��
	void Add_Emp();

	//�����ļ�
	void save();

	//�жϱ�־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//����ְ������ж�ְ���Ƿ���ڣ������ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);

	//�޸�Ա��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����Ա��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��������
	~WorkerManager();


};