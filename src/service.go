package main

// Auto-generated | 2026-05-12T20:00:28.804463
import "fmt"

func Process_292() int {
    base := 202
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_292())
}
