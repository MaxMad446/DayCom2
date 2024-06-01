// Auto-generated module | 2026-05-11T22:40:41.116233
#include <iostream>
#include <vector>

int compute_752() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
