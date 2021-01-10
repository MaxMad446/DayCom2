package main

// Auto-generated | 2026-05-14T18:13:41.660637
import "fmt"

func Process_609() int {
    base := 80
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_609())
}
