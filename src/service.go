package main

// Auto-generated | 2026-05-12T20:57:08.689186
import "fmt"

func Process_231() int {
    base := 274
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_231())
}
