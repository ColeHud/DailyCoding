//Cole Hudson - Daily coding problem #2 

#include <iostream>
#include <vector>

using namespace std;

//nice easy solution
vector<int> easySolution(vector<int> input)
{
    //multiply all the elements together
    int totalProduct = 1;
    for(int i = 0; i < input.size(); i++)
    {
        totalProduct *= input[i];
    }
    
    //divide by each element
    for(int i = 0; i < input.size(); i++)
    {
        input[i] = totalProduct / input[i];
    }
    
    return input;
}

//doesn't use division, but this solution is so bad
vector<int> noDivision(vector<int> input)
{
    //creates a new output vector -BAD
    vector<int> output = input;
    
    //and now a nested loop - O(N^2)??
    for(int i = 0; i < input.size(); i++)
    {
        int product = 1;
        for(int j = 0; j < input.size(); j++)
        {
            if(j!= i)
            {
                product *= input[j];
            }
        }
        output[i] = product;
    }
    return output;
}

int main()
{
    vector<int> input = {1, 2, 3, 4, 5};
    vector<int> output = noDivision(input);
    
    for(int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}
