package main

// Auto-generated | 2026-05-14T06:15:31.062723
import "fmt"

func Process_805() int {
    base := 459
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}
