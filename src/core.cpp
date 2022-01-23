// Auto-generated module | 2026-05-11T20:48:06.647956
#include <iostream>
#include <vector>

int compute_745() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
