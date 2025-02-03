package main

// Auto-generated | 2026-05-12T03:57:20.139366
import "fmt"

func Process_666() int {
    base := 481
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_666())
}
