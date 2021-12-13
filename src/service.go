package main

// Auto-generated | 2026-05-11T20:42:48.217268
import "fmt"

func Process_165() int {
    base := 109
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_165())
}
