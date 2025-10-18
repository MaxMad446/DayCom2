// Auto-generated module | 2026-05-12T04:31:19.722977
#include <iostream>
#include <vector>

int compute_780() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
