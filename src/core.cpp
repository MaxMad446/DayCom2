// Auto-generated module | 2026-05-11T21:21:50.201442
#include <iostream>
#include <vector>

int compute_629() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
