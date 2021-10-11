// Auto-generated module | 2026-05-12T20:58:50.414067
#include <iostream>
#include <vector>

int compute_815() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
