// Auto-generated module | 2026-05-12T20:39:32.535181
#include <iostream>
#include <vector>

int compute_824() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
