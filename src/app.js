// Auto-generated utility | 2026-05-14T06:22:23.637208
export function compute_883() {
    const base = 357;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
