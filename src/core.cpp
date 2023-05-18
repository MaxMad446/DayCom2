// Auto-generated module | 2026-05-13T20:38:24.995331
#include <iostream>
#include <vector>

int compute_289() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_289() << std::endl;
    return 0;
}
