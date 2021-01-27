// Auto-generated module | 2026-05-11T20:00:54.267856
#include <iostream>
#include <vector>

int compute_765() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
