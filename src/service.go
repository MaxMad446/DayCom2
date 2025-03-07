package main

// Auto-generated | 2026-05-12T04:01:44.306297
import "fmt"

func Process_311() int {
    base := 465
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_311())
}
