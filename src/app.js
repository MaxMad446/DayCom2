// Auto-generated utility | 2026-05-12T21:10:18.992024
export function compute_823() {
    const base = 220;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
