// Auto-generated module | 2026-05-13T20:28:18.352317
#include <iostream>
#include <vector>

int compute_542() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
