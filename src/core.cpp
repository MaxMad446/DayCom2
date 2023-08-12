// Auto-generated module | 2026-05-13T20:52:10.295887
#include <iostream>
#include <vector>

int compute_279() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_279() << std::endl;
    return 0;
}
