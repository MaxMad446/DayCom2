package main

// Auto-generated | 2026-05-12T20:58:17.409636
import "fmt"

func Process_617() int {
    base := 431
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_617())
}
