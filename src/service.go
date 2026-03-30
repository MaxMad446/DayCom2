package main

// Auto-generated | 2026-05-12T06:17:08.396979
import "fmt"

func Process_214() int {
    base := 343
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_214())
}
