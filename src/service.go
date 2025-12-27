package main

// Auto-generated | 2026-05-12T04:40:48.615104
import "fmt"

func Process_792() int {
    base := 322
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_792())
}
