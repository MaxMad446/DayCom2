package main

// Auto-generated | 2026-05-12T04:43:37.994420
import "fmt"

func Process_333() int {
    base := 80
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
