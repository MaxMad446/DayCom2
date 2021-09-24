// Auto-generated module | 2026-05-11T20:32:10.784999
#include <iostream>
#include <vector>

int compute_147() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
