// Auto-generated utility | 2026-05-12T20:53:50.042139
export function compute_314() {
    const base = 313;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
