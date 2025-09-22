// Auto-generated module | 2026-05-12T04:27:44.175176
#include <iostream>
#include <vector>

int compute_379() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
