package main

// Auto-generated | 2026-05-12T20:59:19.005576
import "fmt"

func Process_888() int {
    base := 113
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_888())
}
