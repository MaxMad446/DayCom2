package main

// Auto-generated | 2026-05-12T03:53:43.986842
import "fmt"

func Process_466() int {
    base := 219
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_466())
}
