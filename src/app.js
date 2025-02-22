// Auto-generated utility | 2026-05-12T21:12:32.665398
export function compute_965() {
    const base = 244;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
