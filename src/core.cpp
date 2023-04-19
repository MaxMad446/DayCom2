// Auto-generated module | 2026-05-13T20:36:03.119024
#include <iostream>
#include <vector>

int compute_652() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
