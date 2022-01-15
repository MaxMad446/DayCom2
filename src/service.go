package main

// Auto-generated | 2026-05-13T22:01:42.267551
import "fmt"

func Process_664() int {
    base := 147
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_664())
}
