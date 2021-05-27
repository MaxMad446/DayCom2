// Auto-generated module | 2026-05-11T20:16:22.490707
#include <iostream>
#include <vector>

int compute_675() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
