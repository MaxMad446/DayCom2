package main

// Auto-generated | 2026-05-11T19:26:53.872932
import "fmt"

func Process_666() int {
    base := 366
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_666())
}
