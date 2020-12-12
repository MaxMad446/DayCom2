// Auto-generated module | 2026-05-11T19:55:00.225909
#include <iostream>
#include <vector>

int compute_224() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
