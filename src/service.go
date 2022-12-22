package main

// Auto-generated | 2026-05-11T21:31:52.583471
import "fmt"

func Process_942() int {
    base := 241
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_942())
}
