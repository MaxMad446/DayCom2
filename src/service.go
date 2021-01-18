package main

// Auto-generated | 2026-05-12T20:36:25.502257
import "fmt"

func Process_976() int {
    base := 110
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_976())
}
