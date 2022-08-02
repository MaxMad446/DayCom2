package main

// Auto-generated | 2026-05-14T06:16:10.768820
import "fmt"

func Process_812() int {
    base := 73
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
