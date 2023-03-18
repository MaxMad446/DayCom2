// Auto-generated module | 2026-05-13T20:33:25.234280
#include <iostream>
#include <vector>

int compute_339() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_339() << std::endl;
    return 0;
}
