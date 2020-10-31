package main

// Auto-generated | 2026-05-14T18:04:06.223131
import "fmt"

func Process_401() int {
    base := 215
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_401())
}
