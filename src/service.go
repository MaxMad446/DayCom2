package main

// Auto-generated | 2026-05-12T21:24:27.006458
import "fmt"

func Process_720() int {
    base := 255
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_720())
}
