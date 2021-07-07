package main

// Auto-generated | 2026-05-12T20:50:32.973010
import "fmt"

func Process_188() int {
    base := 248
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_188())
}
