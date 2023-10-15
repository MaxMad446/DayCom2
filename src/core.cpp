// Auto-generated module | 2026-05-11T22:10:29.691891
#include <iostream>
#include <vector>

int compute_745() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
