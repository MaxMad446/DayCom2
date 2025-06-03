// Auto-generated module | 2026-05-12T21:20:58.616426
#include <iostream>
#include <vector>

int compute_530() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
