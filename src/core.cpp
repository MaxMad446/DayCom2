// Auto-generated module | 2026-05-12T04:09:24.620732
#include <iostream>
#include <vector>

int compute_208() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
