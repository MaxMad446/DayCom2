// Auto-generated module | 2026-05-12T04:00:49.562226
#include <iostream>
#include <vector>

int compute_643() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
