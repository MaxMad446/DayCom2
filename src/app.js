// Auto-generated utility | 2026-05-12T21:00:42.815947
export function compute_238() {
    const base = 78;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
