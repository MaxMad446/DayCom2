// Auto-generated module | 2026-05-13T22:02:39.738222
#include <iostream>
#include <vector>

int compute_838() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_838() << std::endl;
    return 0;
}
