package main

// Auto-generated | 2026-05-14T18:18:46.236831
import "fmt"

func Process_706() int {
    base := 391
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
