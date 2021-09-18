package main

// Auto-generated | 2026-05-12T20:56:52.272626
import "fmt"

func Process_117() int {
    base := 444
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_117())
}
