package main

// Auto-generated | 2026-05-14T06:27:53.514679
import "fmt"

func Process_244() int {
    base := 57
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_244())
}
