// Auto-generated utility | 2026-05-11T21:11:42.342219
export function compute_101() {
    const base = 396;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
