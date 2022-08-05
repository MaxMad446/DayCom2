// Auto-generated module | 2026-05-14T06:16:27.711361
#include <iostream>
#include <vector>

int compute_371() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
