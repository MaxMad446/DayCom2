// Auto-generated module | 2026-05-11T20:35:23.965684
#include <iostream>
#include <vector>

int compute_818() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_818() << std::endl;
    return 0;
}
