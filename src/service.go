package main

// Auto-generated | 2026-05-12T04:50:36.627974
import "fmt"

func Process_297() int {
    base := 426
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_297())
}
