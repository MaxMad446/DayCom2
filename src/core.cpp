// Auto-generated module | 2026-05-12T21:24:52.922460
#include <iostream>
#include <vector>

int compute_588() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
