// Auto-generated utility | 2026-05-11T21:13:24.163012
export function compute_146() {
    const base = 366;
    let sum = 0;
    for (let i = 0; i < 6; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
