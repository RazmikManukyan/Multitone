#ifndef MULTITONE_MULTITONE_H
#define MULTITONE_MULTITONE_H

class Multitone {
public:
    static Multitone* getInstance();
    ~Multitone();
private:
    Multitone(){};
    Multitone(const Multitone&) = delete;
    Multitone operator=(const Multitone&) = delete;
private:
    static inline Multitone* ob1 = nullptr;
    static inline Multitone* ob2 = nullptr;
    static inline Multitone* ob3 = nullptr;
    static inline Multitone* ob4 = nullptr;
    static const int count = 4;
    static inline int curCount = 0;
};

#endif //MULTITONE_MULTITONE_H
