// Auto-generated module | 2026-05-11T19:27:22.630251
#include <iostream>
#include <vector>

int compute_763() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
