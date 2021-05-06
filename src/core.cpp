// Auto-generated module | 2026-05-12T21:41:10.403939
#include <iostream>
#include <vector>

int compute_477() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_477() << std::endl;
    return 0;
}
