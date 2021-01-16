#pragma once //防止头文件重复包含
#include <iostream> //包含输入输出流头文件
using namespace std; //使用标准命名空间
#include"worker.h"

#include <fstream>
#define FILENAME "empFile.txt" //宏常量，包含头文件 fstream

class WorkerManager
{
public:

	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出系统
	void ExitSystem();

	//记录文件中的人数个数
	int m_EmpNum;

	//员工数组的指针
	Worker ** m_EmpArray;//指向堆区开辟的数组
						 //堆区的数据会随着程序的结束被释放
	//添加员工
	void Add_Emp();

	//保存文件
	void save();

	//判断标志文件是否为空
	bool m_FileIsEmpty;

	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//按照职工编号判断职工是否存在，若存在返回职工在数组中位置，不存在返回-1
	int IsExist(int id);

	//修改员工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序员工
	void Sort_Emp();

	//清空文件
	void Clean_File();

	//析构函数
	~WorkerManager();


};