package main

// Auto-generated | 2026-05-14T18:20:56.349938
import "fmt"

func Process_333() int {
    base := 373
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
