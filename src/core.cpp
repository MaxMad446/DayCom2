// Auto-generated module | 2026-05-14T18:17:19.590619
#include <iostream>
#include <vector>

int compute_329() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_329() << std::endl;
    return 0;
}
