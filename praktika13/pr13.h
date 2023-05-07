#pragma once
class Type1
{
public:
	void show();
	void get_answer();
};

class Type2
{
private:
	double A;
public:
	Type2(double a1);
	void show();
	void get_answer();
};

class Type3
{
private:
	double C;
public:
	Type3(double c1);
	void show();
	void get_answer();
};

class Type4
{
private:
	double A, C;
public:
	Type4(double a1, double c1);
	void show();
	void get_answer();
	void Get_answer_podbor();
};

class Type5
{
private:
	double B, C;
public:
	Type5(double b1, double c1);
	void show();
	void get_answer();
	void Get_answer_podbor();
};

class Type6
{
private:
	double A, B, C;
public:
	Type6(double a1, double b1, double c1);
	void show();
	void get_answer();
	void Get_answer_podbor();
};

class Type7
{
private:
	double B;
public:
	Type7(double b1);
	void show();
	void get_answer();
};

class Type8
{
private:
	double A, B;
public:
	Type8(double a1, double b1);
	void show();
	void get_answer();
	void Get_answer_podbor();
};

