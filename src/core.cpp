// Auto-generated module | 2026-05-11T19:42:22.161034
#include <iostream>
#include <vector>

int compute_389() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
