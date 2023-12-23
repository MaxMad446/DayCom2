// Auto-generated utility | 2026-05-13T21:03:13.421372
export function compute_858() {
    const base = 480;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
