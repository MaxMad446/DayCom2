// Auto-generated module | 2026-05-13T22:01:20.249560
#include <iostream>
#include <vector>

int compute_196() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_196() << std::endl;
    return 0;
}
