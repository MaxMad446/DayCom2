// Auto-generated module | 2026-05-12T06:19:20.737267
#include <iostream>
#include <vector>

int compute_930() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
