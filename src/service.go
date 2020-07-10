package main

// Auto-generated | 2026-05-11T19:34:24.893765
import "fmt"

func Process_386() int {
    base := 487
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
