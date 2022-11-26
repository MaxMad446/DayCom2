// Auto-generated module | 2026-05-11T21:28:27.675763
#include <iostream>
#include <vector>

int compute_610() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
