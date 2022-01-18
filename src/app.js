// Auto-generated utility | 2026-05-13T22:02:02.892760
export function compute_343() {
    const base = 295;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
