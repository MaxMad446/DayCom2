// Auto-generated utility | 2026-05-11T20:58:53.291281
export function compute_351() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 23; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
