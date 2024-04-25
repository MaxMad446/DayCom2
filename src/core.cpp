// Auto-generated module | 2026-05-11T22:35:53.862535
#include <iostream>
#include <vector>

int compute_423() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
