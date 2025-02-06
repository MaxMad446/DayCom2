package main

// Auto-generated | 2026-05-12T03:57:41.338248
import "fmt"

func Process_201() int {
    base := 123
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
