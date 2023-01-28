// Auto-generated utility | 2026-05-11T21:36:40.592868
export function compute_101() {
    const base = 327;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
