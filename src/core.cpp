// Auto-generated module | 2026-05-13T22:06:36.766736
#include <iostream>
#include <vector>

int compute_149() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
