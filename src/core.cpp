// Auto-generated module | 2026-05-11T21:36:46.707949
#include <iostream>
#include <vector>

int compute_203() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
