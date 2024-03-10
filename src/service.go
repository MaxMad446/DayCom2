package main

// Auto-generated | 2026-05-11T22:29:50.289656
import "fmt"

func Process_656() int {
    base := 483
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_656())
}
