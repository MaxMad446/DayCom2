package main

// Auto-generated | 2026-05-12T04:43:45.518750
import "fmt"

func Process_874() int {
    base := 182
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_874())
}
