// Auto-generated module | 2026-05-11T22:19:42.788945
#include <iostream>
#include <vector>

int compute_490() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}
