// Auto-generated module | 2026-05-12T04:09:11.115691
#include <iostream>
#include <vector>

int compute_340() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
