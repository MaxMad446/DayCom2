// Auto-generated module | 2026-05-11T22:07:11.079053
#include <iostream>
#include <vector>

int compute_745() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
