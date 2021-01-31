// Auto-generated module | 2026-05-12T20:37:30.804386
#include <iostream>
#include <vector>

int compute_238() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
