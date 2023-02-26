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
    		for(int col=0;col<row+1;col++){
    			
    			char c=col+1+'A'-1;
    			cout<<c;
			}
			for(int col=row;col>=1;col--){
   			
   			char ch=col+'A'-1;
   			cout<<ch;
		   }
			cout<<endl;
		}
			
   	for(int row=0;row<n-1;row++){
   		for(int col=0;col<row+1;col++){
   			cout<<" ";
		   }

   		for(int col=0;col<n-1-row;col++)
   		{
   			char t=col+1+'A'-1;
   			cout<<t;
		   }
		   //
		   for(int col=n-row-2;col>=1;col--){
    			char p=col+'A'-1;
    			cout<<p;
    				
			}
		   cout<<endl;
	   }
		return 0;
	}
