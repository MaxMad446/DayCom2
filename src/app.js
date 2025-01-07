// Auto-generated utility | 2026-05-12T03:53:50.753077
export function compute_145() {
    const base = 75;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
