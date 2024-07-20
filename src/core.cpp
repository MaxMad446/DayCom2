// Auto-generated module | 2026-05-11T22:46:54.279602
#include <iostream>
#include <vector>

int compute_994() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
