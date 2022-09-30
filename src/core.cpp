// Auto-generated module | 2026-05-14T06:21:00.383161
#include <iostream>
#include <vector>

int compute_744() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
