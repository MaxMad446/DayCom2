// Auto-generated module | 2026-05-13T21:02:10.680062
#include <iostream>
#include <vector>

int compute_410() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
