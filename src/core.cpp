// Auto-generated module | 2026-05-11T21:24:34.686674
#include <iostream>
#include <vector>

int compute_228() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
