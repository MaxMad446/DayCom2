// Auto-generated module | 2026-05-11T22:15:22.274887
#include <iostream>
#include <vector>

int compute_539() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
