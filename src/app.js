// Auto-generated utility | 2026-05-12T04:15:03.715839
export function compute_709() {
    const base = 390;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
