// Auto-generated module | 2026-05-13T22:07:43.393098
#include <iostream>
#include <vector>

int compute_503() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
