// Auto-generated module | 2026-05-12T21:02:03.521811
#include <iostream>
#include <vector>

int compute_371() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
