// Auto-generated module | 2026-05-11T22:18:31.868024
#include <iostream>
#include <vector>

int compute_568() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
