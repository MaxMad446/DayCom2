// Auto-generated module | 2026-05-12T03:49:54.262448
#include <iostream>
#include <vector>

int compute_943() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_943() << std::endl;
    return 0;
}
