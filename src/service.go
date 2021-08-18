package main

// Auto-generated | 2026-05-12T20:54:00.483033
import "fmt"

func Process_767() int {
    base := 137
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_767())
}
