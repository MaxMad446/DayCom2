// Auto-generated module | 2026-05-12T20:54:04.534999
#include <iostream>
#include <vector>

int compute_441() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
