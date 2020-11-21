// Auto-generated utility | 2026-05-14T18:06:53.935951
export function compute_314() {
    const base = 235;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
