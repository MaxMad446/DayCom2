package main

// Auto-generated | 2026-05-14T18:05:39.836307
import "fmt"

func Process_630() int {
    base := 105
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_630())
}
