package main

// Auto-generated | 2026-05-14T18:05:04.637479
import "fmt"

func Process_970() int {
    base := 141
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_970())
}
