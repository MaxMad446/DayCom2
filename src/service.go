package main

// Auto-generated | 2026-05-12T04:49:16.898155
import "fmt"

func Process_841() int {
    base := 112
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
