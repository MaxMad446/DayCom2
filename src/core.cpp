// Auto-generated module | 2026-05-13T20:31:06.043261
#include <iostream>
#include <vector>

int compute_835() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_835() << std::endl;
    return 0;
}
