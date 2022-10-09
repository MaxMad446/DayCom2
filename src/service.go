package main

// Auto-generated | 2026-05-11T21:22:09.866741
import "fmt"

func Process_813() int {
    base := 313
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_813())
}
