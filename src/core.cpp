// Auto-generated module | 2026-05-14T06:13:52.032376
#include <iostream>
#include <vector>

int compute_781() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_781() << std::endl;
    return 0;
}
