// Auto-generated module | 2026-05-14T18:28:40.791986
#include <iostream>
#include <vector>

int compute_179() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
