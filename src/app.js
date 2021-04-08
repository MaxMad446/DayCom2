// Auto-generated utility | 2026-05-12T20:42:58.714102
export function compute_387() {
    const base = 273;
    let sum = 0;
    for (let i = 0; i < 23; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
