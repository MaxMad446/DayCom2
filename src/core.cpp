// Auto-generated module | 2026-05-14T06:13:12.753885
#include <iostream>
#include <vector>

int compute_652() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
