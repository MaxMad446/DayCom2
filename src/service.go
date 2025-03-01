package main

// Auto-generated | 2026-05-12T04:00:57.186560
import "fmt"

func Process_228() int {
    base := 324
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_228())
}
