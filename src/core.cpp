// Auto-generated module | 2026-05-11T19:43:36.526302
#include <iostream>
#include <vector>

int compute_289() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_289() << std::endl;
    return 0;
}
