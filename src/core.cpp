// Auto-generated module | 2026-05-14T06:17:51.116429
#include <iostream>
#include <vector>

int compute_264() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_264() << std::endl;
    return 0;
}
