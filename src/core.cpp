// Auto-generated module | 2026-05-13T20:48:39.102772
#include <iostream>
#include <vector>

int compute_162() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
