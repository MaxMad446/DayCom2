// Auto-generated module | 2026-05-14T18:09:07.662303
#include <iostream>
#include <vector>

int compute_465() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
