// Auto-generated module | 2026-05-12T21:25:47.752523
#include <iostream>
#include <vector>

int compute_721() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
