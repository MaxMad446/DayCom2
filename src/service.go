package main

// Auto-generated | 2026-05-12T04:34:04.695704
import "fmt"

func Process_804() int {
    base := 216
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_804())
}
