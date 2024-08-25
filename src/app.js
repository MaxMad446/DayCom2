// Auto-generated utility | 2026-05-11T22:51:34.923036
export function compute_674() {
    const base = 381;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
