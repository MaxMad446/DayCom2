// Auto-generated utility | 2026-05-12T03:44:04.625101
export function compute_946() {
    const base = 240;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
