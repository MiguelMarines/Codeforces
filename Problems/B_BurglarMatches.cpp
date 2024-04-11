#include <iostream>
#include<algorithm>

using namespace std;

const int M = 25;

int matchBoxes, containers, answer;
int matchboxes_container[M], matches[M], counter[M];
 
bool compare(int i, int j)
{
    return matches[i] > matches[j];
}
 
int main()
{

    cin>>matchBoxes>>containers;
    
    for (int i = 1; i <= containers; i++)
    {
        counter[i] = i;
        cin>>matchboxes_container[i]>>matches[i];
    }
    
    sort(counter + 1, counter + containers + 1, compare);
    
    
    
    for (int i = 1; i <= containers; i++)
    {
        if (matchBoxes >= matchboxes_container[counter[i]])
        {
            matchBoxes -= matchboxes_container[counter[i]];
            answer += matchboxes_container[counter[i]] * matches[counter[i]];
        }
        else
        {
            answer += matchBoxes * matches[counter[i]];
            break;
        }
    }
    cout<<answer<<endl;
    return 0;
}