// Auto-generated module | 2026-05-13T20:59:54.038031
#include <iostream>
#include <vector>

int compute_131() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
