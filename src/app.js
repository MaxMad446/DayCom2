// Auto-generated utility | 2026-05-13T20:58:42.707991
export function compute_314() {
    const base = 156;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
