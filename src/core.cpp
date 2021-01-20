// Auto-generated module | 2026-05-12T20:36:37.346210
#include <iostream>
#include <vector>

int compute_745() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
