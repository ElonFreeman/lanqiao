using namespace std;
#include<iostream>
#include<cstring>

struct bookinfo
{
    char name[100];//不要用string类型，内存拷贝会出现双重释放，会导致未定义行为
    char author[50];
    char press[100];
    int price;
};

bookinfo books[10]=
{
    {"三体","刘慈欣","重庆出版社",68},
    {"活着","余华","作家出版社",45},
    {"百年孤独","加西亚·马尔克斯","南海出版公司",55},
    {"1984","乔治·奥威尔","北京十月文艺出版社",39},
    {"小王子","安托万·德·圣-埃克苏佩里","人民文学出版社",32},
    {"红楼梦","曹雪芹","人民文学出版社",88},
    {"人类简史：从动物到上帝","尤瓦尔·赫拉利","中信出版社",68},
    {"平凡的世界","路遥","北京十月文艺出版社",98},
    {"追风筝的人","卡勒德·胡赛尼","上海人民出版社",36},
    {"解忧杂货店","东野圭吾","南海出版公司",49}
};

int compare_name(const void *a,const void *b)//规定的形参数据类型
{
    bookinfo *p1=(bookinfo*)a,*p2=(bookinfo*)b;
    return strcmp(p1->name,p2->name);//p1->name.compare(p2->name)用于string类型的字符串比较，strcmp仅适用于C风格的字符串比较
}

int compare_price(const void *a,const void *b)
{
    bookinfo *p1=(bookinfo*)a,*p2=(bookinfo*)b;
    return (p1->price)-(p2->price);
}

int main()
{
    int numob=sizeof(books)/sizeof(books[0]),single=sizeof(bookinfo);
    int compare_name(const void *,const void *);

    //by name
    qsort(books,numob,single,compare_name);
    //qsort()参数：待排序数组的地址、元素数量、单个元素大小、定义排序规则的函数
    //qsort()原理：试图将表中的元素进行升序排列，根据compare函数返回的值决定是否操作
    for(int i=0;i<10;i++)
    {
        cout << books[i].name << " " << books[i].author << " " 
         << books[i].press << " " << books[i].price << " "  << endl;
    }
    cout << endl;
    

    //by price
    qsort(books,numob,single,compare_name);
    for(int i=0;i<10;i++)
    {
        cout << books[i].name << " " << books[i].author << " " 
         << books[i].press << " "  << books[i].price << " "  << endl;
    }

    return 0;
}