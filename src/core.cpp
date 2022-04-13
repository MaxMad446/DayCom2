// Auto-generated module | 2026-05-13T22:09:04.613097
#include <iostream>
#include <vector>

int compute_176() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_176() << std::endl;
    return 0;
}
