// Auto-generated module | 2026-05-13T21:00:44.553856
#include <iostream>
#include <vector>

int compute_645() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
