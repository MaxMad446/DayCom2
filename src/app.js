// Auto-generated utility | 2026-05-12T20:02:34.851931
export function compute_560() {
    const base = 475;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
