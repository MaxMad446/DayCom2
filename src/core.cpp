// Auto-generated module | 2026-05-14T18:25:04.406000
#include <iostream>
#include <vector>

int compute_737() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
