// Auto-generated utility | 2026-05-11T22:48:18.643641
export function compute_380() {
    const base = 494;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
