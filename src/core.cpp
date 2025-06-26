// Auto-generated module | 2026-05-12T21:23:03.051817
#include <iostream>
#include <vector>

int compute_665() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
