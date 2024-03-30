// Auto-generated module | 2026-05-11T22:32:24.097629
#include <iostream>
#include <vector>

int compute_915() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_915() << std::endl;
    return 0;
}
