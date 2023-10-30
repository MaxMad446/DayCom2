package main

// Auto-generated | 2026-05-13T20:58:44.142512
import "fmt"

func Process_738() int {
    base := 85
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_738())
}
