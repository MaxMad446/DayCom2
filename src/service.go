package main

// Auto-generated | 2026-05-12T03:40:46.421336
import "fmt"

func Process_883() int {
    base := 46
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_883())
}
