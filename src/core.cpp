// Auto-generated module | 2026-05-11T21:26:04.932478
#include <iostream>
#include <vector>

int compute_293() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_293() << std::endl;
    return 0;
}
