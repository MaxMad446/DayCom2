// Auto-generated utility | 2026-05-12T20:38:43.113604
export function compute_200() {
    const base = 183;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
