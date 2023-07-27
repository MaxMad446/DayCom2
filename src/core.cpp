// Auto-generated module | 2026-05-13T20:50:51.000294
#include <iostream>
#include <vector>

int compute_690() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
