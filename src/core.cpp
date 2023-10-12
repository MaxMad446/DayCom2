// Auto-generated module | 2026-05-13T20:57:16.763817
#include <iostream>
#include <vector>

int compute_670() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
