// Auto-generated module | 2026-05-12T04:35:31.791898
#include <iostream>
#include <vector>

int compute_653() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
