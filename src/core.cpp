// Auto-generated module | 2026-05-11T19:48:35.587915
#include <iostream>
#include <vector>

int compute_725() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
