// Auto-generated module | 2026-05-13T20:58:50.549630
#include <iostream>
#include <vector>

int compute_406() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
