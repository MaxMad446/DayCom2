// Auto-generated utility | 2026-05-11T22:23:01.315857
export function compute_305() {
    const base = 71;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
