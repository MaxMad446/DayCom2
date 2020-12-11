// Auto-generated module | 2026-05-11T19:54:51.692985
#include <iostream>
#include <vector>

int compute_211() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
