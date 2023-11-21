// Auto-generated module | 2026-05-11T22:15:21.358873
#include <iostream>
#include <vector>

int compute_849() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
