package main

// Auto-generated | 2026-05-12T03:59:10.985724
import "fmt"

func Process_473() int {
    base := 500
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
