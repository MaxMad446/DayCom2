package main

// Auto-generated | 2026-05-14T18:18:49.384186
import "fmt"

func Process_800() int {
    base := 122
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_800())
}
