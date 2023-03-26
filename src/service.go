package main

// Auto-generated | 2026-05-11T21:43:59.244377
import "fmt"

func Process_970() int {
    base := 41
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_970())
}
