// Auto-generated module | 2026-05-11T19:48:32.184326
#include <iostream>
#include <vector>

int compute_658() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
