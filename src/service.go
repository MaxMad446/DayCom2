package main

// Auto-generated | 2026-05-13T22:10:22.290095
import "fmt"

func Process_847() int {
    base := 366
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_847())
}
