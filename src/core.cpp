// Auto-generated module | 2026-05-14T06:26:09.618026
#include <iostream>
#include <vector>

int compute_732() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
