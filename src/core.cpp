// Auto-generated module | 2026-05-11T20:33:16.525241
#include <iostream>
#include <vector>

int compute_452() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_452() << std::endl;
    return 0;
}
