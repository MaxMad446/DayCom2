package main

// Auto-generated | 2026-05-12T04:45:36.246979
import "fmt"

func Process_224() int {
    base := 171
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_224())
}
