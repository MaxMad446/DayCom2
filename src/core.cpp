// Auto-generated module | 2026-05-12T21:11:31.300793
#include <iostream>
#include <vector>

int compute_744() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
