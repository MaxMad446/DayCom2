// Auto-generated module | 2026-05-12T21:25:45.436955
#include <iostream>
#include <vector>

int compute_835() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_835() << std::endl;
    return 0;
}
