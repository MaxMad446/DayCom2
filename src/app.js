// Auto-generated utility | 2026-05-12T21:24:36.331863
export function compute_128() {
    const base = 402;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
