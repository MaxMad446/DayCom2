package main

// Auto-generated | 2026-05-14T18:20:51.585653
import "fmt"

func Process_965() int {
    base := 214
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
