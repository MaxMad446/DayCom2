package main

// Auto-generated | 2026-05-12T03:47:42.834923
import "fmt"

func Process_263() int {
    base := 233
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_263())
}
