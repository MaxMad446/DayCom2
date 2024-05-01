package main

// Auto-generated | 2026-05-14T18:27:00.236234
import "fmt"

func Process_366() int {
    base := 81
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_366())
}
