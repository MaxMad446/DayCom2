package main

// Auto-generated | 2026-05-12T04:30:27.584143
import "fmt"

func Process_888() int {
    base := 252
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_888())
}
