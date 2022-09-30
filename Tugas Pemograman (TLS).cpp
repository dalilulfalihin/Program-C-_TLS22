#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int pilih[100],jumlah[100],sub_total[100],harga[100];
	string menu[100];
	int total_bayar;
	int i=0;
	bool selesai=false;

	
	cout<<"*********  MENU MAKANAN DAN MINUMAN WARUNG FALIH  ***********"<<endl;
    cout<<"     "<<endl;
    cout<<"1. Ayam Bakar			Rp. 15000"<<endl;
    cout<<"2. Ikan Bakar			Rp. 25000"<<endl;
    cout<<"3. Ayam Goreng			Rp. 12000"<<endl;
    cout<<"4. Es Teh        		Rp. 5000"<<endl;
    cout<<"5. Es Jeruk      		Rp. 5000"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    
	cout<<"Tekan 0 jika sudah selesai melakukan pemesanan"<<endl<<endl;
    
    while(selesai==false){
    	
    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];
    	
    	if (pilih[i]<=5){
    		
    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i] ="Ayam Bakar        "; 
		    		         harga[i]=15000; 
		    		         break;
		    		case 2 : menu[i] ="Ikan Bakar        "; 
		    		         harga[i]=25000; 
		    		         break;
		    		case 3 : menu[i] ="Ayam Goreng       "; 
		    		         harga[i]=12000;
		    		         break;
		    		case 4 : menu[i] ="Es Teh            "; 
		    		         harga[i]=5000; 
		    		         break;
		    		case 5 : menu[i]="Es Jeruk           "; 
		    	             harga[i]=5000; 
		    		         break;
		    		default : menu[i]="";harga[i]=0;
				}
				
				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;
		    	
		    	sub_total[i]=jumlah[i]*harga[i];
		    	
		    	total_bayar+=sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Menu yang anda pilih tidak tersedia"<<endl;
			cout<<endl;
		}
    
	}
	cout<<endl;
	cout<<endl;
	cout<<"Berikut nota pembayaran Anda :"<<endl;
	cout<<"     "<<endl;
	cout<<"No	Nama Menu    	  	Harga        Jumlah           Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp "<<total_bayar<<endl;
	
	return 0;
}


