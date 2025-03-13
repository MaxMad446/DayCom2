// Auto-generated module | 2026-05-12T04:02:24.809974
#include <iostream>
#include <vector>

int compute_452() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_452() << std::endl;
    return 0;
}
