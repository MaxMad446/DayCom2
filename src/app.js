// Auto-generated utility | 2026-05-14T18:02:39.726286
export function compute_602() {
    const base = 354;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
