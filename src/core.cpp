// Auto-generated module | 2026-05-14T18:27:02.498806
#include <iostream>
#include <vector>

int compute_680() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}
