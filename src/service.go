package main

// Auto-generated | 2026-05-14T06:20:12.512906
import "fmt"

func Process_973() int {
    base := 461
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_973())
}
