// Auto-generated module | 2026-05-11T21:53:32.853246
#include <iostream>
#include <vector>

int compute_780() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
