 
 #include<iostream>
 using namespace std;
 class DiscountDetail{
 	public:
 	int discount;
 	int discountPrice;
 };
 class ItemDetail{
 	public:
 		char name;
 		float price;
 		int number;
 };
 class discountItem:public ItemDetail,public DiscountDetail{
 public:
 	void accept(){
 		cin>>name;
 		cin>>price;
 		cin>>number;
 		cin>>discount;
 		cin>>discountPrice;
	 }
	 void display(){
	 	cout<<"1.Item Name: "<<name<<endl;
	 	cout<<"2.item no: "<<number<<endl;
	 	cout<<"3.item price: "<<price<<endl;
	 	cout<<"4.Discount percentage"<<discount<<endl;
	 	cout<<"5.DiscountPrice:"<<discountPrice<<endl;
	 	cout<<endl;
	 }
 };
 int main(){
 	int i,cnt;
 	float discount = 0.0 , price = 0.0;
 	discountItem dt[100];
 	cin>>cnt;
 	for(i=1;i<=cnt;i++){
 		dt[i].accept_details();
 		
	 }
	 for(i=1;i<=cnt;i++){
 		dt[i].display_detail();
 	}
 	for(i=1;i<=cnt;i++){
 		price=price+dt[i].item_price;
 	}
 	for(i=1;i<=cnt;i++){
 	discount=discount+dt[i],item_price-dt[i].discount_price;
 }
 cout<<"Total price: "<<price<<endl;
 cout<<"total discount: "<<discount;
 return 0;
 		
 }
