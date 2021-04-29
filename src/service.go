package main

// Auto-generated | 2026-05-12T21:40:31.746873
import "fmt"

func Process_452() int {
    base := 382
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_452())
}
