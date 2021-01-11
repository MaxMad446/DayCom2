package main

// Auto-generated | 2026-05-14T18:13:50.120572
import "fmt"

func Process_837() int {
    base := 384
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_837())
}
