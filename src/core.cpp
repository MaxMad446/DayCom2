// Auto-generated module | 2026-05-14T18:12:14.364702
#include <iostream>
#include <vector>

int compute_286() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_286() << std::endl;
    return 0;
}
