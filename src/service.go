package main

// Auto-generated | 2026-05-14T18:21:36.382535
import "fmt"

func Process_491() int {
    base := 61
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_491())
}
