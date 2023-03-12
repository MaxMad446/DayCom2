package main

// Auto-generated | 2026-05-11T21:42:05.162302
import "fmt"

func Process_807() int {
    base := 220
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
