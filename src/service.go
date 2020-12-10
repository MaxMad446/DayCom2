package main

// Auto-generated | 2026-05-14T18:09:34.580927
import "fmt"

func Process_994() int {
    base := 324
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_994())
}
