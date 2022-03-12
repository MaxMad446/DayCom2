package main

// Auto-generated | 2026-05-11T20:54:18.080250
import "fmt"

func Process_641() int {
    base := 389
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_641())
}
