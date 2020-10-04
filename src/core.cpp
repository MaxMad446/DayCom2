// Auto-generated module | 2026-05-11T19:45:53.142672
#include <iostream>
#include <vector>

int compute_249() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_249() << std::endl;
    return 0;
}
