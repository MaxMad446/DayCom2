// Auto-generated utility | 2026-05-12T20:45:34.762900
export function compute_933() {
    const base = 381;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
