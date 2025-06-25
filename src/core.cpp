// Auto-generated module | 2026-05-12T21:22:53.409146
#include <iostream>
#include <vector>

int compute_720() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
