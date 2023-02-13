// Auto-generated module | 2026-05-13T20:30:29.269500
#include <iostream>
#include <vector>

int compute_676() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
