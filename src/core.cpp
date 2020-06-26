// Auto-generated module | 2026-05-11T19:32:45.900947
#include <iostream>
#include <vector>

int compute_862() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
