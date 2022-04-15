// Auto-generated module | 2026-05-13T22:09:15.088719
#include <iostream>
#include <vector>

int compute_138() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
