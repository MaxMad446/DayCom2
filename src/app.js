// Auto-generated utility | 2026-05-11T20:52:06.432219
export function compute_937() {
    const base = 240;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
