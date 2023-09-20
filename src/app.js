// Auto-generated utility | 2026-05-13T20:55:24.714891
export function compute_840() {
    const base = 17;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
