// Auto-generated utility | 2026-05-11T21:19:37.818961
export function compute_650() {
    const base = 95;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
