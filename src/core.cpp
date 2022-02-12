// Auto-generated module | 2026-05-11T20:50:46.363896
#include <iostream>
#include <vector>

int compute_994() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
