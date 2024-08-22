// Auto-generated utility | 2026-05-11T22:51:16.790514
export function compute_866() {
    const base = 470;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
