// Auto-generated module | 2026-05-11T21:59:53.882620
#include <iostream>
#include <vector>

int compute_837() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
