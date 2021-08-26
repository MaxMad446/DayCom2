// Auto-generated module | 2026-05-12T20:54:45.280839
#include <iostream>
#include <vector>

int compute_940() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
