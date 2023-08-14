// Auto-generated module | 2026-05-11T22:02:20.247046
#include <iostream>
#include <vector>

int compute_780() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
