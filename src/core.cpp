// Auto-generated module | 2026-05-12T04:46:39.170138
#include <iostream>
#include <vector>

int compute_340() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
