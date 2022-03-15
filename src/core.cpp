// Auto-generated module | 2026-05-13T22:06:35.373537
#include <iostream>
#include <vector>

int compute_514() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
