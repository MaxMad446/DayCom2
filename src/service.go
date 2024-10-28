package main

// Auto-generated | 2026-05-12T03:44:28.230962
import "fmt"

func Process_952() int {
    base := 211
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_952())
}
