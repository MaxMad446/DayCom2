// Auto-generated utility | 2026-05-12T03:40:35.321231
export function compute_820() {
    const base = 180;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
