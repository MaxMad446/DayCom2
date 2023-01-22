// Auto-generated module | 2026-05-13T20:28:33.496136
#include <iostream>
#include <vector>

int compute_542() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
