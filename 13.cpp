    #include<iostream>
    using namespace std;
    
    int main()
    {
    	int n;
    	cin>>n;
    	
    	for(int row=0;row<n;row++){
    		for(int col=0;col<n-row-1;col++){
    			cout<<" ";
			}
    		for(int col=row;col>=0 ;col--){
    			cout<<col+1;
			}
				for(int col=1;col<row+1;col++){
    			cout<<col+1;
			}
			cout<<endl;	
		}
		
    	for(int row=0;row<n-1;row++){
    	
    		for(int col=0;col<row+1;col++)
    		{
    			cout<<" ";
			}
    		for(int col=n-row-1;col>=1;col--){
    			cout<<col;
    				
			}
				for(int col=0;col<n-row-2;col++){
    			cout<<col+2;
			}
		
			cout<<endl;
		}
		
		
		return 0;
	}
