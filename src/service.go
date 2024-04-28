package main

// Auto-generated | 2026-05-14T18:26:45.171486
import "fmt"

func Process_255() int {
    base := 484
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
