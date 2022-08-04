// Auto-generated module | 2026-05-11T21:13:46.441234
#include <iostream>
#include <vector>

int compute_877() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
