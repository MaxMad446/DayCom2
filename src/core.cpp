// Auto-generated module | 2026-05-11T22:01:34.167939
#include <iostream>
#include <vector>

int compute_917() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_917() << std::endl;
    return 0;
}
