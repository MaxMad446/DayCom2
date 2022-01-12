package main

// Auto-generated | 2026-05-11T20:46:41.704722
import "fmt"

func Process_311() int {
    base := 237
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_311())
}
