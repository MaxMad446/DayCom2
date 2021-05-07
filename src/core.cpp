// Auto-generated module | 2026-05-12T20:45:21.738923
#include <iostream>
#include <vector>

int compute_290() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
