// Auto-generated module | 2026-05-14T18:23:50.926771
#include <iostream>
#include <vector>

int compute_554() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_554() << std::endl;
    return 0;
}
