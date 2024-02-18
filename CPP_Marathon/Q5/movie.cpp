#include<iostream>
#include"movie.h"

int Movie::seats=100;

Movie::Movie()
{
    movieName="abc";
    movieId="0";
    movieDirector="klm";
    mRating=U;
    runTime=120;
    for(int i=0;i<3;i++)
    {
        price[i]=100*(i+1);
    }
}

void Movie::accept()
{
    std::cout<<"enter movie name: ";
    std::cin>>movieName;
    std::cout<<"enter movie id: ";
    std::cin>>movieId;
    std::cout<<"enter movie director: ";
    std::cin>>movieDirector;
    int n;
    std::cout<<"select movie rating \n0:U\n1:R\n2:A";
    std::cin>>n;
    switch (n)
    {
        case 0:mRating=U;
            break;
        case 1:mRating=R;
            break;
        case 2:mRating=A;
            break;
        default:mRating=U;
            break;
    }
    std::cout<<"enter 3 cast names: ";
    for(int i=0;i<3;i++)
    {
        std::cin>>cast[i];      
    }
    std::cout<<"enter the price of movie ticket ";
    for(int i=0;i<3;i++)
    {
        std::cout<<"enter show "<<i+1<<" ticket price: ";
        std::cin>>price[i];
    }

}

Movie::Movie(std::string name, std::string id, std::string dir,MovieRating mr, int runTime_, std::string *c,int *p):
movieName(name),movieId(id),movieDirector(dir),runTime(runTime_)
{
    mRating=mr;
    for(int i=0;i<3;i++)
    {
        cast[i]=c[i];
    }
    for(int i=0;i<3;i++)
    {
        price[i]=p[i];
    }
}

std::ostream &operator<<(std::ostream &os, Movie &m)
{
    os<<"movie name: "<<m.movieName<<std::endl;
    os<<"movie id: "<<m.movieId<<std::endl;
    os<<"movie director: "<<m.movieDirector<<std::endl;
    switch (m.mRating)
    {
        case 0:os<<"movie rating : U"<<std::endl;
            break;
        case 1:os<<"movie rating : R"<<std::endl;
            break;
        case 2:os<<"movie rating : A"<<std::endl;
            break;
    }
    os<<"movie runtime: "<<m.runTime<<std::endl;
    os<<"cast people :"<<std::endl;
    for(int i=0;i<3;i++)
    {
        os<<m.cast[i]<<std::endl;
    }
    return os;
}


