// Auto-generated module | 2026-05-11T21:34:42.967620
#include <iostream>
#include <vector>

int compute_277() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_277() << std::endl;
    return 0;
}
