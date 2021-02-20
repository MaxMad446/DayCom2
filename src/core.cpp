// Auto-generated module | 2026-05-12T20:39:16.670208
#include <iostream>
#include <vector>

int compute_824() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
