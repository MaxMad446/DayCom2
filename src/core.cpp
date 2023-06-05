// Auto-generated module | 2026-05-11T21:53:19.527298
#include <iostream>
#include <vector>

int compute_345() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
