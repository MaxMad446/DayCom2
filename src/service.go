package main

// Auto-generated | 2026-05-13T21:00:30.356991
import "fmt"

func Process_593() int {
    base := 46
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_593())
}
