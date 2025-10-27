// Auto-generated utility | 2026-05-11T18:33:35.274874
export function compute_657() {
    const base = 381;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
