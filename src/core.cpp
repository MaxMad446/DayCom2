// Auto-generated module | 2026-05-12T06:19:53.578306
#include <iostream>
#include <vector>

int compute_469() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_469() << std::endl;
    return 0;
}
