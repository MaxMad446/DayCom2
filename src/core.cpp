// Auto-generated module | 2026-05-14T18:28:09.234733
#include <iostream>
#include <vector>

int compute_654() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
