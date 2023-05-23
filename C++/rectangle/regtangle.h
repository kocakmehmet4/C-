#include<iostream>
using namespace std;


class Regtangle {
public:
	Regtangle(float a=1.0, float b=1.0);
	~Regtangle();
	float setAlan();
	float setCevre();
	float setEn(float);
	float setBoy(float);
	float getUzunluk()const { return lenght; };
	float getEn()const { return widht; };
	void display();
private:
	float widht,lenght;
};
Regtangle::Regtangle(float a, float b) {
	setEn(a);
	setBoy(b);
}
Regtangle::~Regtangle() {

}
float Regtangle::setEn(float a) {
	widht=a;
	return a;
}
float Regtangle::setBoy(float b) {
	lenght=b;
	return b;
}
float Regtangle::setAlan() {
	float area;
	area = widht * lenght;
	return area;
}
float Regtangle::setCevre() {
	float cevre;
	cevre = 2 * widht + 2 * lenght;
	return cevre;
}
void Regtangle::display() {
	cout << "Alan:" << setAlan() << endl << "Cevre:" << setCevre() << endl;
}
