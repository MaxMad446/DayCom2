package main

// Auto-generated | 2026-05-12T21:15:42.400341
import "fmt"

func Process_353() int {
    base := 458
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_353())
}
