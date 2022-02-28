// Auto-generated module | 2026-05-11T20:52:43.607103
#include <iostream>
#include <vector>

int compute_157() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
