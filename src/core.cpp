// Auto-generated module | 2026-05-12T20:37:27.820669
#include <iostream>
#include <vector>

int compute_734() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}
