// Auto-generated module | 2026-05-12T04:02:30.957305
#include <iostream>
#include <vector>

int compute_152() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
