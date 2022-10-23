// Auto-generated module | 2026-05-14T06:22:53.890527
#include <iostream>
#include <vector>

int compute_313() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
