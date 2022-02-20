// Auto-generated module | 2026-05-13T22:04:43.205907
#include <iostream>
#include <vector>

int compute_187() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
