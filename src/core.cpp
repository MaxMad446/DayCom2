// Auto-generated module | 2026-05-14T06:19:36.929678
#include <iostream>
#include <vector>

int compute_103() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}
