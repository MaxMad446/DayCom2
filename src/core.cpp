// Auto-generated module | 2026-05-11T19:36:22.276070
#include <iostream>
#include <vector>

int compute_524() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
