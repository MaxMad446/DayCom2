package main

// Auto-generated | 2026-05-14T06:11:26.554788
import "fmt"

func Process_469() int {
    base := 172
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_469())
}
