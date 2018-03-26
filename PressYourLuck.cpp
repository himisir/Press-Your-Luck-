#include<bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));

    int r, c, rr, r1, r2, i, j, k, p[11], q[11], l, n, x, y, sc;
    char a;

    string name[11];

    while(1)
    {
        cout<<"\t\t\tEnter the numbers of players: \n";
        cin>>n;
        cout<<"\n\t\t\tEnter each of your names: \n";
        for(i=0; i<n; i++)
        {
            cout<<"Player "<<i+1<<"\n";
            cin>>name[i];
            cout<<"\n";
        }

        getchar();
        cout<<"\n\n\tLets Begin!!\n\n";
        getchar();
        cout<<"\t\tYour move "<<name[0]<<"!\n\n";
        getchar();

        for(i=0; i<n; i++)
        {
            cout<<"\n\n\n\tHere "<<name[i]<<" goes!\n\n";
            getchar();

            sc=0;
            for(j=0; j<10; j++)
                {
                    cout<<"\tPress Your luck!\n";

                    getchar();


                    r=(rand()%10)+1;
                    rr=(rand()%2)+1;
                    r1=(rand()%10)-10;
                    r2=(rand()%20)+11;

                    if(i==r||r%3==0)
                    {

                        if(rr==1)
                        {
                            cout<<"BAD LUCK!\n"<<r1<<"\n";
                            sc=sc+r1;
                        }
                        else
                        {
                            cout<<"GOOD LUCK!\n"<<r2<<"\n";

                            sc+=r2;
                        }

                    }
                    else
                    {
                        cout<<"Hmmm...\n"<<r<<"\n";
                        sc=sc+r;
                    }

                }

                p[i]=sc;
                q[i]=sc;


                if(i<n-1)
                {
                    cout<<"\n\n\t\t\tYour move "<<name[i+1]<<"!\n\t\t\t";
                }


        }

        sort(p, p+n);
        reverse(p, p+n);

        for(i=0; i<n; i++)
        {
            x=0;
            for(j=0; j<n; j++)
            {
                if(p[i]==q[j])
                {
                    x=1;
                    y=j;
                   break;
                }
            }
            if(x>0) break;
        }


        cout<<"\n\n\t\t\t"<<name[y]<<"\n\t\t\tWins!\n\n";
        getchar();

        cout<<"\n\t\tScore Board: \n\n";

        l=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(p[i]==q[j])
                {
                    if(i!=0&&p[i]==p[i-1])
                    {
                        l++;
                        j+=l;
                        break;
                    }
                    else
                    {
                        l=0;
                        break;
                    }


                }

            }

            cout<<i+1<<". "<<p[i]<<" ---- "<<name[j]<<"\n";

        }

        cout<<"\n\n\tPress: \n\n";
        cout<<"\t\tANOTHER GAME ==> 1\n"<<"\t\tQUIT         ==> 0\n";
        cin>>c;
        if(c==0) break;

    }


}

