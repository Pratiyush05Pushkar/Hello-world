//#include<set>
// command + options + 3= opens 3 tabs
// add input.in and ouput.in separately.
#include<iostream>
#include<queue>
//#include<unordered_map>
//#include<cmath>
#include<vector>
using namespace std;
//pop_top,pop_pos,top,

class Comp1{
	public:
	bool operator()(pair<int,int>a,pair<int,int>b){
		cout<<a.first<<" first "<<a.second<<" second "<<b.first<<" third "<<b.second<<"\n";
		
		return false;

	}
};
/*
unordered_map<int,int> umap;
struct comp {
    bool operator() (const pair <int , int> a,const pair <int , int> b) const {
        if(a.first<b.first){// a is child b is parent
			return true;
		}
		else if(a.first==b.first && a.second<b.second){
			return true;
		}
		//return true;
		return false;
        //return lhs.first > rhs.first;
    }
};*/
/*int c(double d){

	int v=(int)d;
	if(v==d){return v;}
	return v+1;
}
int c(int s){
	cout<<"Mt lv";
	return s+11;
}*/
int BinaryS(vector<int> a,int val){
	int s=a.end()-a.begin();
	//cout<<"size "<<s<<"\n";
	int l=0,h=s;
	int m;
	while(l<h){
		m=(l+h)/2;
		if(a[m]>=val){
			h=m;
		}
		else{
			l=m+1;
		}
	}
	return l;
}
int main(){
    /*set<pair<int,int>,comp> s1;
    set<pair<int,int>,comp>::iterator it;
    s1.insert({10,3});
    s1.insert({3,5});
    s1.insert({4,1});
    s1.insert({4,3});
    //cout<<s1.empty();
    for( it=s1.begin();it!=s1.end();it++){
    	cout<<(*it).first<<" "<<(*it).second<<"\n";
    }
    //s1.erase({4,3});

    s1.erase({4,3});
    cout<<"After removal\n";
    for( it=s1.begin();it!=s1.end();it++){
    	cout<<(*it).first<<" "<<(*it).second<<"\n";

    }*/
    priority_queue<pair<int,int>,vector<pair<int,int>>,Comp1> pq;
    pq.push(make_pair(100,4));
     cout<<pq.top().first<<"at top here\n";
     pq.push(make_pair(5,3));
    pq.push(make_pair(56,4));
    pq.pop();
    cout<<pq.top().first<<"at top here\n";
    pq.push(make_pair(2,4));
    cout<<pq.top().first<<"at top here\n";
    pq.push(make_pair(4,4));
    cout<<pq.top().first<<"reached here\n";
    pq.pop();
    cout<<pq.top().first;
    
    return 0;
}