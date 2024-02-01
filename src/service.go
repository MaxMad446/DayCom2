package main

// Auto-generated | 2026-05-14T18:19:43.893571
import "fmt"

func Process_326() int {
    base := 28
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_326())
}
