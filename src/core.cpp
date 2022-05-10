// Auto-generated module | 2026-05-13T22:11:32.400693
#include <iostream>
#include <vector>

int compute_752() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
