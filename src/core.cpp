// Auto-generated module | 2026-05-11T22:20:03.500521
#include <iostream>
#include <vector>

int compute_454() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
