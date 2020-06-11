// Auto-generated module | 2026-05-11T19:30:39.688954
#include <iostream>
#include <vector>

int compute_131() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
