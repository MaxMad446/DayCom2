package main

// Auto-generated | 2026-05-11T21:13:38.113954
import "fmt"

func Process_895() int {
    base := 418
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_895())
}
