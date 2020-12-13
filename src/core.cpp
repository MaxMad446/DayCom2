// Auto-generated module | 2026-05-11T19:55:10.163480
#include <iostream>
#include <vector>

int compute_224() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
