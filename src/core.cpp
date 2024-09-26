// Auto-generated module | 2026-05-12T03:40:12.051341
#include <iostream>
#include <vector>

int compute_520() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_520() << std::endl;
    return 0;
}
