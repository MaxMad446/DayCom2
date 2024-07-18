// Auto-generated module | 2026-05-11T22:46:41.540050
#include <iostream>
#include <vector>

int compute_996() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_996() << std::endl;
    return 0;
}
