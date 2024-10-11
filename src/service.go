package main

// Auto-generated | 2026-05-12T03:42:15.092607
import "fmt"

func Process_807() int {
    base := 54
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
