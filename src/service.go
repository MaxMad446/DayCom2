package main

// Auto-generated | 2026-05-12T06:22:13.472373
import "fmt"

func Process_803() int {
    base := 140
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
