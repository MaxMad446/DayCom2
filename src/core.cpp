// Auto-generated module | 2026-05-14T18:08:01.818630
#include <iostream>
#include <vector>

int compute_542() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
