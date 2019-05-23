
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void show_vect(vector <int> vect)
{
        for(auto it=vect.begin();it!=vect.end();it++)
                cout<<*it<<"  ";
}                  
                   
int main()         
{       
        vector <int> vect1;
        vect1.push_back(34);
        vect1.push_back(4);
        vect1.push_back(345);
        vect1.push_back(786);
        show_vect(vect1);
	cout<<endl<<"Front element => "<<vect1.front()<<endl;
	cout<<"Last element => "<<vect1.back()<<endl;
	cout<<"Element at position [2] => "<<vect1.at(2)<<endl;
	cout<<endl<<"VECTOR => "<<endl;
	show_vect(vect1);
	vect1.pop_back();
	cout<<"Pop element from back => "<<endl;
	cout<<endl<<"VECTOR => "<<endl;
	show_vect(vect1);
	cout<<"Size => "<<vect1.size()<<endl;
	cout<<"Capacity => "<<vect1.capacity()<<endl;
	vect1.emplace_back(45);
	vect1.emplace_back(67);
	vect1.emplace_back(145);
	vect1.emplace_back(435);
	//vect1.push_front(783);
	show_vect(vect1);
	if(!vect1.empty())
		cout<<"Vector is not empty!"<<endl;
	cout<<endl<<endl;
	// traversing the vector from right to left
	for(auto it=vect1.crbegin();it!=vect1.crend();it++)
		cout<<*it<<" ";
	cout<<endl;
	vect1.insert(vect1.begin(),893);
	show_vect(vect1);


	cout<<"\nSize of this vector is  -> "<<vect1.size()<<endl;
	vect1.resize(5);
	/*
	cout<<"\nSize of this vector is  -> "<<vect1.size()<<endl;

	show_vect(vect1);
	*/

	vect1.shrink_to_fit();
	show_vect(vect1);
	cout<<endl;
	/*
	vect1.insert(5,4,89);
	show_vect(vect1);
	*/
	cout<<"Another way of traversing a vector = >"<<endl;
	/*
	for(auto it=0;it<vect1.size();it++)
		cout<<vect1[it]<<" ";
	*/
	for(auto i:vect1)
		cout<<i<<" ";
	vector<int> vect2;
	cout<<endl;
	vect2.assign(7,92);
	show_vect(vect2);
	cout<<endl;

	vector<pair <int,string>>vect_pair;
	vect_pair.emplace_back(34,"Jimut");
	vect_pair.emplace_back(54,"Denmark");
	vect_pair.emplace_back(74,"India");
	cout<<"Displaying vector pairs :=>"<<endl;
	for(int i=0;i<vect_pair.size();i++)
		cout<<vect_pair[i].first<<" "<<vect_pair[i].second<<endl;
	/*
	for(auto i: vect_pair)
		cout<<i.first<<" "<<i.second<<endl;
	*/

	cout<<"Vector 1 =>"<<endl;
	show_vect(vect1);//<<endl
	
	cout<<"Vector 2 =>"<<endl;
	show_vect(vect2);//<<endl

	vect1.swap(vect2);
	
	cout<<endl;	
	cout<<"Vector 1 =>"<<endl;
	show_vect(vect1);//<<endl
	cout<<endl;	
	cout<<"Vector 2 =>"<<endl;
	show_vect(vect2);//<<endl
	cout<<endl;	


}    
