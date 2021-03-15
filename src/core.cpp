// Auto-generated module | 2026-05-12T21:36:36.133098
#include <iostream>
#include <vector>

int compute_987() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}
