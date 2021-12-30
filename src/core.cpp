// Auto-generated module | 2026-05-11T20:45:00.813141
#include <iostream>
#include <vector>

int compute_518() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_518() << std::endl;
    return 0;
}
