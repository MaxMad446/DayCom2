// Auto-generated module | 2026-05-13T22:12:54.281638
#include <iostream>
#include <vector>

int compute_763() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
