// Auto-generated module | 2026-05-11T21:56:55.345558
#include <iostream>
#include <vector>

int compute_961() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_961() << std::endl;
    return 0;
}
