// Auto-generated module | 2026-05-11T22:00:31.305304
#include <iostream>
#include <vector>

int compute_761() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
