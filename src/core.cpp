// Auto-generated module | 2026-05-13T20:49:31.792524
#include <iostream>
#include <vector>

int compute_564() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
