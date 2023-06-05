package main

// Auto-generated | 2026-05-11T21:53:18.478046
import "fmt"

func Process_755() int {
    base := 141
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
