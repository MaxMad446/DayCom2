// Auto-generated module | 2026-05-13T22:02:38.499565
#include <iostream>
#include <vector>

int compute_524() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
