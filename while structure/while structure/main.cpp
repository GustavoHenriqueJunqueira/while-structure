//
//  main.cpp
//  Estrutura while
//
//  Created by Gustavo Henrique Furtado Junqueira on 17/05/16.
//  Copyright © 2016 Gustavo Henrique Furtado Junqueira. All rights reserved.
//

#include <iostream>
using namespace std;
int main (){

    int number;
    
    cout<<"Type a lower number than 100 to start:\n";
    cin>>number;
    
    while (number<=100) {
        cout<<number<<"\n";
        number=number+1;
        
    }
    return 0;
    
}