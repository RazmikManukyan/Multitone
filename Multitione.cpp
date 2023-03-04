#include "Multitone.h"

Multitone* Multitone::getInstance() {
    switch(curCount % count){
        case 0:
            ++curCount;
            if(ob1 == nullptr) {
                ob1 = new Multitone();
            }
            return ob1;
        case 1:
            ++curCount;
            if(ob2 == nullptr) {
                ob2 = new Multitone();
            }
            return ob2;
        case 2:
            ++curCount;
            if(ob3 == nullptr) {
                ob3 = new Multitone();
            }
            return ob3;
        case 3:
            ++curCount;
            if(ob4 == nullptr) {
                ob4 = new Multitone();
            }
            return ob4;
        default:
            return nullptr;
    }

}

Multitone::~Multitone(){
    ob1 = nullptr;
    ob2 = nullptr;
    ob3 = nullptr;
    ob4 = nullptr;
}
