// Auto-generated module | 2026-05-13T20:30:53.351806
#include <iostream>
#include <vector>

int compute_765() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
