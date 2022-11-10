// Auto-generated module | 2026-05-14T06:24:22.252052
#include <iostream>
#include <vector>

int compute_491() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
