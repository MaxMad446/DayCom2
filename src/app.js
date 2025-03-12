// Auto-generated utility | 2026-05-12T04:02:18.993584
export function compute_493() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
