package main

// Auto-generated | 2026-05-11T22:17:35.846723
import "fmt"

func Process_570() int {
    base := 417
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
