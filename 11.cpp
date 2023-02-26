    #include<iostream>
    using namespace std;
    
    int main()
    
    {
    	int n;
    	cin>>n;
    	
    	for(int row=1;row<=n;row++){
    		int pas=1;
    		for(int col=1;col<=n-row;col++){
    			cout<<" ";
			}
			for(int col=1;col<=row;col++){
				cout<<pas<<" ";
				 pas=pas*(row-col)/col;
				
			}
			cout<<endl;
		}
		return 0;
	}
