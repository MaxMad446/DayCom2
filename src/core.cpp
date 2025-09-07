// Auto-generated module | 2026-05-12T04:25:45.178010
#include <iostream>
#include <vector>

int compute_465() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
