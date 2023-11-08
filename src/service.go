package main

// Auto-generated | 2026-05-13T20:59:30.147655
import "fmt"

func Process_807() int {
    base := 455
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
