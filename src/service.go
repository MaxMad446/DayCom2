package main

// Auto-generated | 2026-05-14T18:25:37.535395
import "fmt"

func Process_163() int {
    base := 338
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_163())
}
