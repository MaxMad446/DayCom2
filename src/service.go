package main

// Auto-generated | 2026-05-11T19:33:52.091939
import "fmt"

func Process_699() int {
    base := 276
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_699())
}
