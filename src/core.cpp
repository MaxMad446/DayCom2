// Auto-generated module | 2026-05-12T21:37:20.530012
#include <iostream>
#include <vector>

int compute_753() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}
