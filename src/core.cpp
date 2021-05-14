// Auto-generated module | 2026-05-12T20:45:52.068873
#include <iostream>
#include <vector>

int compute_247() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
