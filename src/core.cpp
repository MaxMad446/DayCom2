// Auto-generated module | 2026-05-12T06:19:29.943218
#include <iostream>
#include <vector>

int compute_754() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
