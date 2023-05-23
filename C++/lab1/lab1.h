#include<iostream>

class lab1 {
	public:
		lab1(string,string,int,int);
		void setPartNumber(string);
		string getPartNumber();
		void setPartDescription(string);
		string getPartyDescription();
		void setQuantity(int);
		int getQuantity();
		void setPriceItem(int);
		int getPriceItem();
		int getInVoiceAmount();
	private:
		int item, purchase;
		string  description, number;
};

lab1::lab1(string descrition, string number, int count, int pur) {
	setPartNumber();
	setPartDescription();
	setQuantity();
	setPriceItem();

}
