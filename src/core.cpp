// Auto-generated module | 2026-05-14T06:24:37.243879
#include <iostream>
#include <vector>

int compute_231() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
