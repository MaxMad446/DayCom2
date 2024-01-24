// Auto-generated module | 2026-05-11T22:23:41.878253
#include <iostream>
#include <vector>

int compute_480() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
