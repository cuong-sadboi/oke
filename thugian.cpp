#include<iostream>

struct Con_nguoi{
	Con_nguoi(int t,float v1,float cc){
        tuoi = t;
        vong_mot = v1;
        chieu_cao = cc;
    }
	int tuoi;
	float vong_mot;
	float chieu_cao;
};

int main(){
	Con_nguoi Anh(19, 90,1.65);
	Con_nguoi huhu(19, 92,1.67);
	Con_nguoi huh(19, 91,1.66);
	
	Con_nguoi *ny = nullptr;
	
	//Thu2
	ny = &Anh;
	Anh.tuoi = 20;
	std::cout << (*ny).tuoi<<std::endl;
	
	//Thu3
	ny = ny + 1;
	std::cout<< (*ny).vong_mot<<std::endl;
	
	//Thu5
	ny = ny + 1;
	std::cout<<(*ny).chieu_cao<<std::endl;
//	std::cout << &Anh << std::endl;
//	std::cout << &Cuong << std::endl;
//	std::cout << &Hai << std::endl;
	return 0;
}
