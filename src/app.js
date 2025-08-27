// Auto-generated utility | 2026-05-12T21:28:31.677477
export function compute_958() {
    const base = 448;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
