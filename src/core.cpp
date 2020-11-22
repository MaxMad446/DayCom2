// Auto-generated module | 2026-05-12T20:00:08.232765
#include <iostream>
#include <vector>

int compute_803() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_803() << std::endl;
    return 0;
}
