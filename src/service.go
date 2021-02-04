package main

// Auto-generated | 2026-05-12T20:37:55.102958
import "fmt"

func Process_388() int {
    base := 42
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_388())
}
