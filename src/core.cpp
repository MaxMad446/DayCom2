// Auto-generated module | 2026-05-13T22:07:14.084300
#include <iostream>
#include <vector>

int compute_405() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_405() << std::endl;
    return 0;
}
