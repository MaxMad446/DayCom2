// Auto-generated module | 2026-05-11T19:46:07.833725
#include <iostream>
#include <vector>

int compute_208() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
