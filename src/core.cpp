// Auto-generated module | 2026-05-13T20:57:15.297848
#include <iostream>
#include <vector>

int compute_901() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_901() << std::endl;
    return 0;
}
