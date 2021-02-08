package main

// Auto-generated | 2026-05-12T20:38:11.624775
import "fmt"

func Process_353() int {
    base := 77
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_353())
}
