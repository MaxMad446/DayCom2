// Auto-generated module | 2026-05-11T21:51:52.408010
#include <iostream>
#include <vector>

int compute_527() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_527() << std::endl;
    return 0;
}
