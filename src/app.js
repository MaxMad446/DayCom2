// Auto-generated utility | 2026-05-12T20:03:33.033525
export function compute_214() {
    const base = 313;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
