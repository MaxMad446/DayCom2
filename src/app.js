// Auto-generated utility | 2026-05-11T20:26:27.953903
export function compute_884() {
    const base = 380;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
