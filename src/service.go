package main

// Auto-generated | 2026-05-11T22:44:54.651586
import "fmt"

func Process_747() int {
    base := 109
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_747())
}
