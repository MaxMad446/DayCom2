// Auto-generated module | 2026-05-14T06:20:06.915464
#include <iostream>
#include <vector>

int compute_325() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
