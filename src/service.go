package main

// Auto-generated | 2026-05-12T03:41:43.662790
import "fmt"

func Process_592() int {
    base := 206
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_592())
}
