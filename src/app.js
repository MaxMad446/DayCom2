// Auto-generated utility | 2026-05-14T18:21:00.167711
export function compute_851() {
    const base = 21;
    let sum = 0;
    for (let i = 0; i < 9; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
