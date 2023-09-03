// Auto-generated utility | 2026-05-13T20:53:56.602004
export function compute_858() {
    const base = 480;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
