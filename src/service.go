package main

// Auto-generated | 2026-05-13T20:32:42.091717
import "fmt"

func Process_841() int {
    base := 466
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
