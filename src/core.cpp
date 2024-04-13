// Auto-generated module | 2026-05-14T18:25:19.726853
#include <iostream>
#include <vector>

int compute_102() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
