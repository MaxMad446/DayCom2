// Auto-generated module | 2026-05-11T22:03:12.605353
#include <iostream>
#include <vector>

int compute_539() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
