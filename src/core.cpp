// Auto-generated module | 2026-05-12T06:18:58.207965
#include <iostream>
#include <vector>

int compute_395() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
