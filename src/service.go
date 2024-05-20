package main

// Auto-generated | 2026-05-11T22:39:12.282755
import "fmt"

func Process_628() int {
    base := 370
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_628())
}
