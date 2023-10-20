package main

// Auto-generated | 2026-05-13T20:57:54.499022
import "fmt"

func Process_979() int {
    base := 352
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_979())
}
