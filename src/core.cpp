// Auto-generated module | 2026-05-11T21:42:26.792524
#include <iostream>
#include <vector>

int compute_676() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
