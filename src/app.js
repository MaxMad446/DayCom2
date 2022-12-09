// Auto-generated utility | 2026-05-11T21:30:11.185305
export function compute_421() {
    const base = 390;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
