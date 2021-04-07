package main

// Auto-generated | 2026-05-12T20:42:51.494820
import "fmt"

func Process_341() int {
    base := 242
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_341())
}
