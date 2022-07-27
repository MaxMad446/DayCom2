// Auto-generated module | 2026-05-11T21:12:42.927355
#include <iostream>
#include <vector>

int compute_619() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
