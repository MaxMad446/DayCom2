// Auto-generated module | 2026-05-14T06:27:46.724002
#include <iostream>
#include <vector>

int compute_634() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
