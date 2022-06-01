// Auto-generated module | 2026-05-14T06:11:15.269457
#include <iostream>
#include <vector>

int compute_281() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
