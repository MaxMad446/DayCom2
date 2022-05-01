// Auto-generated module | 2026-05-11T21:00:53.485320
#include <iostream>
#include <vector>

int compute_737() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
