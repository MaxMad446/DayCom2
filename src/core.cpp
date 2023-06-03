// Auto-generated module | 2026-05-11T21:53:05.898411
#include <iostream>
#include <vector>

int compute_192() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
