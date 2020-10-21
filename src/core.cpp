// Auto-generated module | 2026-05-12T19:57:35.185312
#include <iostream>
#include <vector>

int compute_657() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
