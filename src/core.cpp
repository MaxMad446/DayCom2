// Auto-generated module | 2026-05-11T21:46:32.549206
#include <iostream>
#include <vector>

int compute_737() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
