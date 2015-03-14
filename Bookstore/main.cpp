//
//  main.cpp
//  Bookstore
//
//  Created by Matthew Linaberry on 3/14/15.
//  Copyright (c) 2015 Matthew Linaberry. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total;
    if (std::cin >> total ) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            }
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else {
        std::cerr << "No data?!?!?" << std::endl;
        return -1;
    }
    return 0;
}
