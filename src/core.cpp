// Auto-generated module | 2026-05-14T06:15:00.900364
#include <iostream>
#include <vector>

int compute_340() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
