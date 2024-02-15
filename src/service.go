package main

// Auto-generated | 2026-05-14T18:20:50.677930
import "fmt"

func Process_326() int {
    base := 423
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_326())
}
