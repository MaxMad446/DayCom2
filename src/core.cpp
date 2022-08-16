// Auto-generated module | 2026-05-11T21:15:18.923867
#include <iostream>
#include <vector>

int compute_764() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_764() << std::endl;
    return 0;
}
