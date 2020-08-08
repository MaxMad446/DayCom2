// Auto-generated module | 2026-05-11T19:38:17.221723
#include <iostream>
#include <vector>

int compute_131() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
