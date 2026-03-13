package main

// Auto-generated | 2026-05-12T04:50:59.034231
import "fmt"

func Process_862() int {
    base := 471
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_862())
}
