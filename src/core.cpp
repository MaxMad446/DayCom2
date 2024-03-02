// Auto-generated module | 2026-05-14T18:22:10.567149
#include <iostream>
#include <vector>

int compute_798() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_798() << std::endl;
    return 0;
}
