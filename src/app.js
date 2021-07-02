// Auto-generated utility | 2026-05-12T20:50:09.832470
export function compute_937() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 19; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
