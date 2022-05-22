// Auto-generated module | 2026-05-13T22:12:31.349381
#include <iostream>
#include <vector>

int compute_595() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
