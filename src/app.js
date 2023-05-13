// Auto-generated utility | 2026-05-11T21:50:09.001864
export function compute_880() {
    const base = 468;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
