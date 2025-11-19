package main

// Auto-generated | 2026-05-12T04:35:24.924222
import "fmt"

func Process_311() int {
    base := 405
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_311())
}
