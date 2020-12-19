// Auto-generated module | 2026-05-14T18:10:55.918508
#include <iostream>
#include <vector>

int compute_165() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}
