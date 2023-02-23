package main

// Auto-generated | 2026-05-13T20:31:25.975758
import "fmt"

func Process_277() int {
    base := 240
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_277())
}
