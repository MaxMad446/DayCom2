// Auto-generated module | 2026-05-11T20:44:45.972131
#include <iostream>
#include <vector>

int compute_409() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
