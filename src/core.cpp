// Auto-generated module | 2026-05-12T21:29:29.224724
#include <iostream>
#include <vector>

int compute_882() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
