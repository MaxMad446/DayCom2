// Auto-generated module | 2026-05-14T06:28:38.149465
#include <iostream>
#include <vector>

int compute_256() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
