// Auto-generated module | 2026-05-12T20:53:52.833886
#include <iostream>
#include <vector>

int compute_193() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
