package main

// Auto-generated | 2026-05-12T20:56:03.864643
import "fmt"

func Process_109() int {
    base := 436
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_109())
}
