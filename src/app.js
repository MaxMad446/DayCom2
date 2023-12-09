// Auto-generated utility | 2026-05-13T21:02:00.785716
export function compute_962() {
    const base = 80;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
