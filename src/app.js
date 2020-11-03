// Auto-generated utility | 2026-05-14T18:04:30.926149
export function compute_664() {
    const base = 300;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
