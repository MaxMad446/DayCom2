package main

// Auto-generated | 2026-05-11T22:17:49.953395
import "fmt"

func Process_835() int {
    base := 353
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_835())
}
