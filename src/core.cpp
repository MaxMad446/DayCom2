// Auto-generated module | 2026-05-11T21:08:00.966464
#include <iostream>
#include <vector>

int compute_343() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
