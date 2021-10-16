package main

// Auto-generated | 2026-05-12T20:59:08.396672
import "fmt"

func Process_330() int {
    base := 408
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_330())
}
