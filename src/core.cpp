// Auto-generated module | 2026-05-12T06:19:56.381785
#include <iostream>
#include <vector>

int compute_697() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
