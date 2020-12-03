#include<bits/stdc++.h>
//#include<bits/stdc++.h>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map.h>
//#include<string.h>
//#include<climits>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long 
#define vec vector<int>
#define rep for(int i=0;i<n;i++)
#define rrep for(int i=n-1;i>=0;i--)
#define repj for(int j=0;j<n;j++)
#define MAX_INT 2000000000


int main(){


int n;		int check=0;
	cout<<"Enter Board Size : ";
	cin>>n;

char Board[n][n];
rep{
	repj{

		Board[i][j]='-';
	}
}

char first;
char second;
cout<<"Player 1 is Symbol(x,o): ";
	cin>>first;

	if(first=='x')
		second ='o';
	else if (first=='o')
		second ='x';

	else 
		{check=1;
			cout<<"error in input";}


int locr;
int locc;

int counter=1;	int win=0;
if(check==0){

	while(counter<=n*n){


//input for first player
		cout<<"First Player Enter Loc [r c] : ";
			cin>>locr>>locc;
			if(Board[locr-1][locc-1]=='-')
			{Board[locr-1][locc-1]=first;
			counter++;}
			else
			cout<<"Space used"<<endl;
rep{	repj{	cout<<Board[i][j]<<" ";	}		cout<<endl;    }


//check for first player 
                    // diagonal checck1
					int dc=0;
					for(int a=0;a<n;a++){
						if(Board[a][a]==first)
							dc++;
					}
				if(dc==n)
				win=1;
				

					// diagonal checck2
					dc=0;int b=n-1;
					for(int a=0;a<n;a++){
						if(Board[a][b]==first)
							dc++;
						b--;
					}
				if(dc==n)
				win=1;
				
		rep{
			repj{
					
				if(Board[i][j]==first){
					//horizontal check 
					int c=0;
					for(int a=j;a<n;a++){
						if(Board[i][a]!=first)
							break;
						else
							c++;}
				if(c==n)
				{		win=1;
					break;}


					//vertical check
					c=0;
					for(int a=i;a<n;a++){
						if(Board[a][j]!=first)
							break;
						else
							c++;}
				if(c==n)
				{		win=1;
					break;}

				}			
			if(win!=0)
					break;     }
			if(win!=0)
			break;				}   //end cheking for first 

			if(win!=0)				// end
				break;

//input for second player
		cout<<"Second Player Enter Loc [r c] : ";
			cin>>locr>>locc;
			if(Board[locr-1][locc-1]=='-')
			{Board[locr-1][locc-1]=second;
			counter++;}
			else
			cout<<"Space used"<<endl;
rep{	repj{	cout<<Board[i][j]<<" ";	}		cout<<endl;    }


//check for second player
                    // diagonal checck1
					dc=0;
					for(int a=0;a<n;a++){
						if(Board[a][a]==second)
							dc++;
					}
				if(dc==n)
				win=2;
				

					// diagonal checck2
					dc=0; b=n-1;
					for(int a=0;a<n;a++){
						if(Board[a][b]==second)
							dc++;
						b--;
					}
				if(dc==n)
				win=2;
		rep{
			repj{
					
				if(Board[i][j]==second){
					//horizontal check 
					int c=0;
					for(int a=j;a<n;a++){
						if(Board[i][a]!=second)
							break;
						else
							c++;}
				if(c==n)
				{		win=2;
					break;}

					//vertical check
					c=0;
					for(int a=i;a<n;a++){
						if(Board[a][j]!=second)
							break;
						else
							c++;}
				if(c==n)
				{		win=2;
					break;}


				}

				
			if(win!=0)
					break;		}

			if(win!=0)
					break;		}  //end checking for second


			if(win!=0)					// end
				break;





	}  // while loop end

}//if condtion end 







if(win==1)
cout<<"FIRST IS THE WINNER";
else
cout<<"SECOND IS THE WINNER";



}