// Auto-generated module | 2026-05-12T04:20:58.994797
#include <iostream>
#include <vector>

int compute_577() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
