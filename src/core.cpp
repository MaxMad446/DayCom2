// Auto-generated module | 2026-05-11T19:51:50.428977
#include <iostream>
#include <vector>

int compute_219() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}
