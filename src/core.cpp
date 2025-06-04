// Auto-generated module | 2026-05-12T04:13:01.677003
#include <iostream>
#include <vector>

int compute_116() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
