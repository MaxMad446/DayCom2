package main

// Auto-generated | 2026-05-12T19:59:17.764930
import "fmt"

func Process_140() int {
    base := 408
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_140())
}
