// Auto-generated utility | 2026-05-11T21:07:02.348359
export function compute_302() {
    const base = 180;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
