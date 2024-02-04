// Auto-generated module | 2026-05-14T18:20:02.275116
#include <iostream>
#include <vector>

int compute_140() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
