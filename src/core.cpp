// Auto-generated module | 2026-05-14T06:16:03.021010
#include <iostream>
#include <vector>

int compute_676() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
