// Auto-generated module | 2026-05-11T21:06:58.728958
#include <iostream>
#include <vector>

int compute_994() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
