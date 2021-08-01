// Auto-generated module | 2026-05-11T20:25:12.083031
#include <iostream>
#include <vector>

int compute_317() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
