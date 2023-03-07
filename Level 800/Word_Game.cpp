#include <iostream>

using namespace std;

int main()
{
    int t, n, j, k;
    cin >> t;
    int m[t][3];
    for (int i = 0; i < t; i++)
    {
        // count1 = 1;
        // count2 = 1;
        // count3 = 1;
        cin >> n;
        int score1=0;
        int score2=0;
        m[i][0]=3*n;
        m[i][1]=0;
        m[i][2]=0;
      //  int score[3][n];
        string str1[n], str2[n], str3[n];
        for (j = 0; j < n; j++)
        {
            cin >> str1[j];
           // score[0][j] = 3;
        }
        for (j = 0; j < n; j++)
        {
            cin >> str2[j];
            for (k=0; k<n; k++)
                if(str1[k]==str2[j])
                {
                    m[i][0]-=2;
                    break;
                }
           // score[1][j] = 3;
        }
        m[i][1]=m[i][0];
      //  cout<<"Second Score"<<m[i][1];
        for (j = 0; j < n; j++)
        {
            cin >> str3[j];
            score1=0;
            score2=0;
            for(k=0; k<n; k++)
            {
                if(str1[k]==str3[j])
                    score1=1;
                if(str2[k]==str3[j])
                    score2=1;
                if(score1==1 && score2==1)
                    break;
            }
            if(score1==1 && score2==0)
            {
                m[i][0]-=2;
                m[i][2]+=1;
            }
            else if(score1==0 && score2==1)
            {
                m[i][1]-=2;
                m[i][2]+=1;
            }
            else if(score1==1 && score2==1)
            {
                m[i][0]-=1;
                m[i][1]-=1;
            }
            else
            {
                m[i][2]+=3;
            }
           // score[2][j] = 3;
           //cout<<"\nSecond Score"<<m[i][1]<<"\n";
        }

        // for (j = 0; j < n; j++)
        // {
        //     for (k = 0; k < n; k++)
        //     {
        //         if (str1[j] == str2[k])
        //         {
        //             if (score[0][j] == 1)
        //                 score[0][j] = score[1][k] = score[2][i2] = 0;
        //             else
        //             {
        //                 score[0][j] = score[1][k] = 1;
        //                 i1 = k;
        //             }
        //         }
        //         if (str1[j] == str3[k])
        //         {
        //             if (score[0][j] == 1)
        //                 score[0][j] = score[1][i1] = score[2][k] = 0;
        //             else
        //             {
        //                 score[0][j] = score[2][k] = 1;
        //                 i2 = k;
        //             }
        //         }
        //         if (str2[j] == str3[k] && score[1][j] != 0)
        //         {
        //             score[1][j] = score[2][k] = 1;
        //         }
        //     }
        // }


        // sum = 0;
        // for (j = 0; j < n; j++)
        //     sum += score[0][j];
        // m[i][0] = sum;
        // sum = 0;
        // for (j = 0; j < n; j++)
        //     sum += score[1][j];
        // m[i][1] = sum;
        // sum = 0;
        // for (j = 0; j < n; j++)
        //     sum += score[2][j];
        // m[i][2] = sum;


        
    }

    for (int i = 0; i < t; i++)
    {
        for (j = 0; j < 3; j++)
            cout << m[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
