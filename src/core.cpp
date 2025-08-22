// Auto-generated module | 2026-05-12T21:28:04.417094
#include <iostream>
#include <vector>

int compute_458() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_458() << std::endl;
    return 0;
}
