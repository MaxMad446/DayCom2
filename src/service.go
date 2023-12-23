package main

// Auto-generated | 2026-05-11T22:19:34.475535
import "fmt"

func Process_925() int {
    base := 15
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_925())
}
