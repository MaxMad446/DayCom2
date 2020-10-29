package main

// Auto-generated | 2026-05-14T18:03:44.834043
import "fmt"

func Process_280() int {
    base := 200
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_280())
}
