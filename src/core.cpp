// Auto-generated module | 2026-05-11T21:44:11.047905
#include <iostream>
#include <vector>

int compute_611() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
