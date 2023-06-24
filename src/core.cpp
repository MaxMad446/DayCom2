// Auto-generated module | 2026-05-13T20:48:11.588634
#include <iostream>
#include <vector>

int compute_845() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
