// Auto-generated module | 2026-05-11T21:29:55.643401
#include <iostream>
#include <vector>

int compute_359() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
