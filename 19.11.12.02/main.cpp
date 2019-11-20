//
//  main.cpp
//  19.11.12.02
//
//  Created by s20181105879 on 2019/11/12.
//  Copyright © 2019 s20181105879. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;
struct node {
    long kao;
    string id;
    int score;
    long kao1;
}s[10000];
bool cmp( struct node p1, struct node p2)
{
    if(p1.score==p2.score)
    {
        return p1.id<p2.id;
    }
    
        return p1.score>p2.score;
    
 
}

int main(int argc, const char * argv[]) {
    long n,m;
    cout<<"dgfdgf"<<endl;
    
    cin>>n;
    long count=0;
    long count1=0;
    long kk=0;
    string id;
    int sco;
    for(long i=0;i<n;i++)
    {
        cin>>m;
        count1=count;
        for(long j=0;j<m;j++)
        {
            
            cin>>id>>sco;
            s[count].id=id;
            s[count].score=sco;
            s[count].kao=i;
            count++;
        }
        sort(s+count1,s+count,cmp);
        kk=0;
        for(long j=0;j<m;j++)
        {
            if(s[count1+j].score!=s[count1+j-1].score)
            {
                kk=j;
            }
            s[count1+j].kao1=kk+1;
        }
        
        
    }
    sort(s,s+count,cmp);
    cout<<count<<endl;
    long cc=0;
    for(long i=0;i<count;i++)
    {
        if(s[i].score!=s[i-1].score)
        {
            cc=i;
        }
        else
        {
            
        }
        cout<<s[i].id<<" "<<cc+1<<" "<<s[i].kao+1<<" "<<s[i].kao1<<endl;

    }
    

   
    return 0;
}
