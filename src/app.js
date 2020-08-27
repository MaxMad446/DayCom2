// Auto-generated utility | 2026-05-11T19:40:53.477335
export function compute_314() {
    const base = 275;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
