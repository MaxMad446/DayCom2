// Auto-generated module | 2026-05-12T03:43:01.356261
#include <iostream>
#include <vector>

int compute_823() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_823() << std::endl;
    return 0;
}
