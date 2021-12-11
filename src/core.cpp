// Auto-generated module | 2026-05-12T21:03:54.948008
#include <iostream>
#include <vector>

int compute_233() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
