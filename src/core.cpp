// Auto-generated module | 2026-05-12T03:54:09.785737
#include <iostream>
#include <vector>

int compute_100() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
