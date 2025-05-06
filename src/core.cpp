// Auto-generated module | 2026-05-12T21:18:31.924394
#include <iostream>
#include <vector>

int compute_478() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
