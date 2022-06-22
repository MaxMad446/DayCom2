// Auto-generated module | 2026-05-14T06:13:00.245266
#include <iostream>
#include <vector>

int compute_760() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
