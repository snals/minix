//
//  limit.c
//  minix_system_call
//
//  Created by Florentin Rochet on 4/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>

int getrlimit(int resource, struct rlimit *rlim){
    switch (resource) {
        case 0: _SYSCALL();
            break;
            
        default:
            break;
    }
    
}
int setrlimit(int resource, const struct rlimit *rlim){
    
}