// Auto-generated module | 2026-05-12T20:38:19.421092
#include <iostream>
#include <vector>

int compute_201() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_201() << std::endl;
    return 0;
}
