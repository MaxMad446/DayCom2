// Auto-generated module | 2026-05-12T21:18:53.676229
#include <iostream>
#include <vector>

int compute_875() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
