// Auto-generated module | 2026-05-13T22:09:12.982797
#include <iostream>
#include <vector>

int compute_930() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
