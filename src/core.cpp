// Auto-generated module | 2026-05-14T06:28:09.923489
#include <iostream>
#include <vector>

int compute_315() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
