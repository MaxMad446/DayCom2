package main

// Auto-generated | 2026-05-12T04:06:45.537569
import "fmt"

func Process_908() int {
    base := 360
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_908())
}
