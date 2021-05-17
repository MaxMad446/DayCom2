package main

// Auto-generated | 2026-05-12T20:46:08.784426
import "fmt"

func Process_941() int {
    base := 360
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_941())
}
