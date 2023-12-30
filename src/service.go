package main

// Auto-generated | 2026-05-11T22:20:22.272859
import "fmt"

func Process_312() int {
    base := 166
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_312())
}
