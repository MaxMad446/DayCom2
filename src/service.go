package main

// Auto-generated | 2026-05-14T18:13:28.595755
import "fmt"

func Process_413() int {
    base := 277
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
