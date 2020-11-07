package main

// Auto-generated | 2026-05-14T18:05:03.193525
import "fmt"

func Process_925() int {
    base := 299
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_925())
}
