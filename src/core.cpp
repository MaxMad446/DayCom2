// Auto-generated module | 2026-05-11T21:02:22.535062
#include <iostream>
#include <vector>

int compute_309() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_309() << std::endl;
    return 0;
}
