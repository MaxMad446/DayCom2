// Auto-generated module | 2026-05-14T18:08:03.837916
#include <iostream>
#include <vector>

int compute_764() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_764() << std::endl;
    return 0;
}
