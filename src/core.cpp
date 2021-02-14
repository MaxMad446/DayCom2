// Auto-generated module | 2026-05-12T20:38:48.637263
#include <iostream>
#include <vector>

int compute_745() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
