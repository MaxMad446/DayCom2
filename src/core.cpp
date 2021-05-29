// Auto-generated module | 2026-05-12T20:47:10.316819
#include <iostream>
#include <vector>

int compute_834() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
