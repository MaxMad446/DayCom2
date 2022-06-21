package main

// Auto-generated | 2026-05-11T21:07:38.798868
import "fmt"

func Process_549() int {
    base := 299
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_549())
}
