package main

// Auto-generated | 2026-05-11T21:11:52.393719
import "fmt"

func Process_805() int {
    base := 418
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}
