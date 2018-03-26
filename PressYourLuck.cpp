#include<bits/stdc++.h>
using namespace std;

void line(void)
{
    cout<<"---------------------------------------------------------\n";
}
int main()
{
    srand(time(0));

    int r, c, rr, r1, r2, i, j, cnt, k, p[11], q[11], l, n, x, y, sc;
    char a;

    string name[11];

    while(1)
    {
        line();
        line();
        cout<<"\t\tEnter the numbers of players: \n";
        cin>>n;
        cout<<"\n\t\tEnter each of your names: \n";
        for(i=0; i<n; i++)
        {
            cout<<"Player "<<i+1<<"\n";
            cin>>name[i];
            cout<<"\n";
        }

        getchar();
        cout<<"\n\n\tLets Begin!!\n\n";
        getchar();

        for(i=0; i<n; i++)
        {
            cout<<"\n\nYour move "<<name[i]<<"!\n";
            line();
            getchar();
            sc=0;
            cnt=1;
            for(j=0; j<10; j++)
                {
                    cout<<cnt<<". Press Your luck!\n";

                    getchar();


                    r=(rand()%10)+1;
                    rr=(rand()%2)+1;
                    r1=((rand()%10)-21)%11;
                    r2=((rand()%10)+11)%21;

                    if(i==r||r%4==1)
                    {

                        if(rr==1)
                        {
                            cout<<"\n\n\t  "<<r1<<"\n\tBAD LUCK!\n\n\n";
                            sc=sc+r1;
                        }
                        else
                        {
                            cout<<"\n\n\t    "<<r2<<"\n\tGOOD LUCK!\n\n\n";

                            sc+=r2;
                        }

                    }
                    else
                    {
                        cout<<"\n\n\t     "<<r<<"\n\tMANGO PEOPLE!\n\n\n";
                        sc=sc+r;
                    }
                    cnt++;

                }

                p[i]=sc;
                q[i]=sc;


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

        line();

        cout<<"\n\n\t\t\t"<<name[y]<<"\n\t\t\tWins!\n\n\n";
        line();
        getchar();

        line();

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

            cout<<"\t\t"<<i+1<<". "<<name[j]<<" ---- "<<p[i]<<"\n";

        }

        cout<<"\n\n\t\tPress: \n\n";
        line();
        cout<<"\t\tANOTHER GAME ==> 1\n"<<"\t\tQUIT         ==> 0\n";
        cin>>c;
        line();
        if(c==0) break;

    }


}

