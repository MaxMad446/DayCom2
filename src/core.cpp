// Auto-generated module | 2026-05-14T18:05:08.432146
#include <iostream>
#include <vector>

int compute_610() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
