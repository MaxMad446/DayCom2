// Auto-generated module | 2026-05-11T19:29:34.939000
#include <iostream>
#include <vector>

int compute_725() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
