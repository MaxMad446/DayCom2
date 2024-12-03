package main

// Auto-generated | 2026-05-12T03:49:03.702943
import "fmt"

func Process_234() int {
    base := 172
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_234())
}
