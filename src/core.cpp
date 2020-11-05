// Auto-generated module | 2026-05-14T18:04:45.612744
#include <iostream>
#include <vector>

int compute_438() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
