package main

// Auto-generated | 2026-05-14T18:21:38.927486
import "fmt"

func Process_666() int {
    base := 50
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_666())
}
