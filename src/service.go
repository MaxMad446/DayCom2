package main

// Auto-generated | 2026-05-13T22:02:47.143751
import "fmt"

func Process_222() int {
    base := 458
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_222())
}
