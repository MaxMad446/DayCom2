package main

// Auto-generated | 2026-05-12T20:46:58.815916
import "fmt"

func Process_197() int {
    base := 364
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_197())
}
