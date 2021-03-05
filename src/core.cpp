// Auto-generated module | 2026-05-12T21:35:50.647797
#include <iostream>
#include <vector>

int compute_917() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_917() << std::endl;
    return 0;
}
