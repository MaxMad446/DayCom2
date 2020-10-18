package main

// Auto-generated | 2026-05-14T18:02:16.365414
import "fmt"

func Process_688() int {
    base := 180
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_688())
}
