package main

// Auto-generated | 2026-05-11T20:53:42.548338
import "fmt"

func Process_886() int {
    base := 255
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_886())
}
