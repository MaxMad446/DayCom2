package main

// Auto-generated | 2026-05-11T22:18:06.444673
import "fmt"

func Process_785() int {
    base := 263
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_785())
}
