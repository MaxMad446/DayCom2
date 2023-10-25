// Auto-generated module | 2026-05-11T22:11:50.490249
#include <iostream>
#include <vector>

int compute_494() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
