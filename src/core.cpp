// Auto-generated module | 2026-05-12T04:39:01.567695
#include <iostream>
#include <vector>

int compute_477() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_477() << std::endl;
    return 0;
}
