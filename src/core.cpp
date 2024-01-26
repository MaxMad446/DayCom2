// Auto-generated module | 2026-05-14T18:19:17.486068
#include <iostream>
#include <vector>

int compute_224() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
