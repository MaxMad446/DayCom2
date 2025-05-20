// Auto-generated module | 2026-05-12T04:11:20.792668
#include <iostream>
#include <vector>

int compute_709() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
