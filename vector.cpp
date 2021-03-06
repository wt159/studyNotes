#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//cout
void priVectorData(vector <int> &n)
{
    for(auto i = n.begin(); i != n.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //for(auto e:n)
     //   cout << e << endl;
}
//add 
void addVectorData(vector <int> &n, int data)
{
    //n.insert(n.end(), data);      //向容器尾部插入数据
    n.insert(n.begin()+1, data);  //在第一个元素插入数据
    //n.push_back(data);          //向容器尾部插入数据

}
//delete
void delVectorData(vector <int> &n)
{
    //n.erase(n.begin()+1);   //删除第一个数据(从0开始)
    n.erase(n.end()-1);       //删除最后一个数据
    //n.erase(n.begin()+2, n.begin()+4);  //删除第二个到四个数据
    //n.clear();      //清除整个vector
}
//change and sort
void changeVectorData(vector<int> &n, int oldData, int newData)
{
#if 1
    vector<int>::iterator i;            //使用迭代器遍历vector
    for( i = n.begin(); i != n.end(); ++i)  
    {
        cout << *i << endl;
        if((*i) == oldData)
        {
            cout << "oldData:" << *i << endl;
            n.erase(i);
            break;
        }
    }
#else
    int len = n.size();            
    for(int i = 0; i <= len; i++)  
    {
        if(n[i] == oldData)
        {
            n.erase(n.begin()+i);
        }
    }
#endif 
    addVectorData(n, newData);
    std::sort(n.begin(), n.end());
}
//查找
bool findVectorData(vector <int> &n, int data)
{
    if(n.empty())
        return false;
    for(int i=0; i<n.size(); i++)   //使用数组形式
    {
        if(n[i] == data)
            return true;
    }
    return false;   
}

//other
void traserveVector(vector<int> &n)
{
    vector<int>::iterator i;
    for(i = n.begin(); i != n.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    for_each(n.begin(), n.end(), [](int i)->void{cout << i << " ";});
    cout << endl;
}

int main(void)
{
    vector <int> num = {0,1,2,3};
    priVectorData(num);
    
    for(int i=4; i<10; i++)
        addVectorData(num, i);
    priVectorData(num);

    delVectorData(num);
    priVectorData(num);
    
    changeVectorData(num, 2, 10);
    priVectorData(num);
    cout << " end " << endl;
    /*
    cout << findVectorData(num, 4) << endl;
    cout << num.size() << endl;
    */
   //traserveVector(num);
    return 0;
}