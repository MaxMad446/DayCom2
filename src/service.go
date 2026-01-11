package main

// Auto-generated | 2026-05-12T04:42:40.926141
import "fmt"

func Process_365() int {
    base := 348
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_365())
}
