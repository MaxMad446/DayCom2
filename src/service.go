package main

// Auto-generated | 2026-05-14T18:18:12.365979
import "fmt"

func Process_783() int {
    base := 373
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_783())
}
