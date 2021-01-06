// Auto-generated module | 2026-05-14T18:13:13.129951
#include <iostream>
#include <vector>

int compute_833() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
