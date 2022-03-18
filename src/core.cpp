// Auto-generated module | 2026-05-13T22:06:51.423189
#include <iostream>
#include <vector>

int compute_983() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
