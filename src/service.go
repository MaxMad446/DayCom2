package main

// Auto-generated | 2026-05-11T20:15:46.137189
import "fmt"

func Process_826() int {
    base := 191
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_826())
}
