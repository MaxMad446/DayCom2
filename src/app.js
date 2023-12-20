// Auto-generated utility | 2026-05-13T21:02:59.854390
export function compute_226() {
    const base = 80;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
