package main

// Auto-generated | 2026-05-14T18:11:45.809818
import "fmt"

func Process_708() int {
    base := 448
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_708())
}
