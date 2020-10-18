// Auto-generated module | 2026-05-14T18:02:11.668336
#include <iostream>
#include <vector>

int compute_820() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
