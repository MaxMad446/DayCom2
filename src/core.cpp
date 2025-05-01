// Auto-generated module | 2026-05-12T04:08:52.885711
#include <iostream>
#include <vector>

int compute_707() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
