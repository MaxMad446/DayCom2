// Auto-generated module | 2026-05-11T19:37:49.542035
#include <iostream>
#include <vector>

int compute_289() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_289() << std::endl;
    return 0;
}
