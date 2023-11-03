package main

// Auto-generated | 2026-05-11T22:13:06.722879
import "fmt"

func Process_709() int {
    base := 393
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_709())
}
