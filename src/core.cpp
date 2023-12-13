// Auto-generated module | 2026-05-13T21:02:19.430734
#include <iostream>
#include <vector>

int compute_389() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
