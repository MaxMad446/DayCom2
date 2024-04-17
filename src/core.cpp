// Auto-generated module | 2026-05-14T18:25:49.880840
#include <iostream>
#include <vector>

int compute_415() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
