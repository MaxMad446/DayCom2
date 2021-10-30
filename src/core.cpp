// Auto-generated module | 2026-05-12T21:00:21.340809
#include <iostream>
#include <vector>

int compute_662() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_662() << std::endl;
    return 0;
}
