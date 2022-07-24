// Auto-generated module | 2026-05-14T06:15:32.423216
#include <iostream>
#include <vector>

int compute_858() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_858() << std::endl;
    return 0;
}
