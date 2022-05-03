// Auto-generated module | 2026-05-13T22:10:53.294096
#include <iostream>
#include <vector>

int compute_855() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_855() << std::endl;
    return 0;
}
