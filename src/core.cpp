// Auto-generated module | 2026-05-11T20:31:50.452316
#include <iostream>
#include <vector>

int compute_632() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_632() << std::endl;
    return 0;
}
