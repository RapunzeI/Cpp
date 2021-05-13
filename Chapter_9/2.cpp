#include <iostream>
#include <string>
using namespace std;
class Converter{
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run(){
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};
class KmToMile : public Converter{
	double ratio;
	double Mile;
public:
	KmToMile(double ratio) : Converter(ratio){
		this->ratio = ratio;
	}
	virtual double convert(double src){
		Mile = src / ratio;
		return Mile;
	}
	virtual string getSourceString(){
		return "Km";
	}
	virtual string getDestString(){
		return "Mile";
	}
};

int main(){
	KmToMile toMile(1.609344);
	toMile.run();
}