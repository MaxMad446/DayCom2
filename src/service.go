package main

// Auto-generated | 2026-05-13T20:34:22.826531
import "fmt"

func Process_372() int {
    base := 317
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_372())
}
