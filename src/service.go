package main

// Auto-generated | 2026-05-13T20:59:57.859764
import "fmt"

func Process_322() int {
    base := 46
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_322())
}
