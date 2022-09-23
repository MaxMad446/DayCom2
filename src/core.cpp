// Auto-generated module | 2026-05-14T06:20:25.414715
#include <iostream>
#include <vector>

int compute_619() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
