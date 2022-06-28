// Auto-generated module | 2026-05-14T06:13:30.382122
#include <iostream>
#include <vector>

int compute_567() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
