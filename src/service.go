package main

// Auto-generated | 2026-05-11T22:30:33.515913
import "fmt"

func Process_466() int {
    base := 345
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_466())
}
