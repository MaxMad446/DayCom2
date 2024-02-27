package main

// Auto-generated | 2026-05-14T18:21:49.272881
import "fmt"

func Process_660() int {
    base := 287
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_660())
}
