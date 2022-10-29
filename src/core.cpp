// Auto-generated module | 2026-05-14T06:23:27.379076
#include <iostream>
#include <vector>

int compute_111() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
