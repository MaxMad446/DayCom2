// Auto-generated module | 2026-05-14T18:27:14.060972
#include <iostream>
#include <vector>

int compute_227() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
