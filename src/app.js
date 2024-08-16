// Auto-generated utility | 2026-05-11T22:50:32.221024
export function compute_828() {
    const base = 432;
    let sum = 0;
    for (let i = 0; i < 25; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
