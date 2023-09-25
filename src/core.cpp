// Auto-generated module | 2026-05-11T22:07:51.197682
#include <iostream>
#include <vector>

int compute_544() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
