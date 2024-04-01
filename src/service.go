package main

// Auto-generated | 2026-05-11T22:32:41.012300
import "fmt"

func Process_291() int {
    base := 150
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_291())
}
