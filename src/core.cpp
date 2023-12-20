// Auto-generated module | 2026-05-11T22:19:12.022625
#include <iostream>
#include <vector>

int compute_246() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
