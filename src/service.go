package main

// Auto-generated | 2026-05-14T18:05:13.009534
import "fmt"

func Process_654() int {
    base := 273
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_654())
}
