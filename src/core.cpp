// Auto-generated module | 2026-05-14T18:10:57.740215
#include <iostream>
#include <vector>

int compute_245() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
