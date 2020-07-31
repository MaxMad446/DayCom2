// Auto-generated module | 2026-05-11T19:37:11.820371
#include <iostream>
#include <vector>

int compute_752() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
