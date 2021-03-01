package main

// Auto-generated | 2026-05-12T21:35:33.470727
import "fmt"

func Process_908() int {
    base := 459
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_908())
}
