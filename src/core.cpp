// Auto-generated module | 2026-05-12T21:10:47.529652
#include <iostream>
#include <vector>

int compute_454() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
