// Auto-generated module | 2026-05-12T03:47:16.584969
#include <iostream>
#include <vector>

int compute_441() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
