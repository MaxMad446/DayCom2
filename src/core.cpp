// Auto-generated module | 2026-05-11T21:00:48.108123
#include <iostream>
#include <vector>

int compute_791() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_791() << std::endl;
    return 0;
}
